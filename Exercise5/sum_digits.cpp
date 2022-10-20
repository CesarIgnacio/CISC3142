#include <iostream>
#include <sstream>

using namespace std;

int sum_digits() {

    stringstream ss;
    int auxNum;
    int sum = 0;

    cout << "Enter a positive number ";
    string num;
    cin >> num;

    // Uses the String Stream fuction to convert from string to integer
    ss << num;
    ss >> auxNum;

    for (int i = 0; i < num.length(); i++) {
        sum += auxNum % 10;
        auxNum = auxNum / 10;
    }
    
    cout << "The sum of digits of the munber " << num << " is: " << sum << endl << endl;



}