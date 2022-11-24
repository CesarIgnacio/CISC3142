#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Row
{
    string month;
    int temp;
};

double simple_average(vector<Row> v);
vector<double> moving_average(vector<Row> v);
vector<double> weighted_average(vector<Row> v);

int main()
{
    fstream table;
    table.open("weather.csv");

    string month, tem;
    vector<Row> vec;

    getline(table, month);

    while (table.good())
    {
        getline(table, month, ',');
        getline(table, tem, '\n');
        Row r = {month, stoi(tem)};
        vec.push_back(r);
    }

    double simp_average = simple_average(vec);
    vector<double> mov_average = moving_average(vec);
    vector<double> weigh_average = weighted_average(vec);

    cout << "Simple average: " << simp_average << endl;
    cout << "Moving average: " << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].month << " " << mov_average[i] << endl;
    }
    cout << "\nWeighted average:" << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].month << " " << weigh_average[i] << endl;
    }
}

double simple_average(vector<Row> v)
{
    double ave = 0;
    for (Row n : v)
    {
        ave += n.temp;
    }
    return ave / (v.size());
}

vector<double> moving_average(vector<Row> v)
{
    double ave = 0;
    vector<double> aveVec(v.size());
    for (int i = 2; i < v.size(); i++)
    {
        ave = (v[i - 2].temp + v[i - 1].temp + v[i].temp) / 3;
        aveVec[i] = ave;
    }
    return aveVec;
}

vector<double> weighted_average(vector<Row> v)
{
    double ave = 0;
    vector<double> aveVec(v.size());
    for (int i = 2; i < v.size(); i++)
    {
        ave = (v[i - 2].temp + (v[i - 1].temp * 2) + (v[i].temp * 3)) / 6;
        aveVec[i] = ave;
    }
    return aveVec;
}
