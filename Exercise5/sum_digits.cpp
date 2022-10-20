#include <iostream>
#include <sstream>

using namespace std;

int main() {

    stringstream ss;
    int auxNum;
    int sum = 0;

    cout << "Enter a more than one digit positive number ";
    string num;
    cin >> num;

    // Uses the String Stream fuction to convert from string to integer
    ss << num;
    ss >> auxNum;

    for (int i = 0; i < num.length(); i++) {
        sum += auxNum % 10;
        auxNum = auxNum / 10;
    }
    
    cout << "The sum of digits of the number " << num << " is: " << sum << endl << endl;

   return 0;
}