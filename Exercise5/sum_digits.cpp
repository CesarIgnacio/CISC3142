#include <iostream>
#include <sstream>

using namespace std;

int main() {

    stringstream ss;
    int auxNum;
    int sum = 0;

    cout << "Enter a positive number ";
    string num;
    cin >> num;

    ss << num;
    ss >> auxNum;

    for (int i = 0; i < num.length(); i++) {
        sum += auxNum % 10;
        auxNum = auxNum / 10;
    }
    
    cout << "The sum of digits of the munber " << num << " is: " << sum << endl << endl;



}