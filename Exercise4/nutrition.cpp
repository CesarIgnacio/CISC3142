#include <iostream>
#include <cmath>

using namespace std;

double poundToGram(double weight) {
    return weight * 453.59237;
}

double maxSweetCom(double weight) {
    return weight / 7;
}

int main() {

    double weight;
    const double sweetPerCan = 0.0001;

    cout << "Insert your future weight in pounds ";
    cin >> weight;

    weight = maxSweetCom(poundToGram(weight));

    long double answer =  (weight / sweetPerCan) - 1;

    int result = trunc(answer);

    cout<< "The number of cans you can drink without dying is:  " << result << endl;

    return 0;
}