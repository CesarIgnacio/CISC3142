#include<iostream>
#include<vector>
#include "hello.cpp"
#include "sum_2_num.cpp"
#include "interval.cpp"
#include "sum_digits.cpp"
#include "prime_num.cpp"

using namespace std;


int main() {

    cout << "Which program do you want to run" << endl;
    cout << "1 - Hello\n" << "2 - Sum of two numbers\n" << "3 - Interval\n" << "4 - Sum of digits\n" << "5 - Prime number" << endl;

    int option;
    cin >> option;

    switch (option) {
    case 1:
        p1::main();
        break;
    case 2:
        p2::main();
        break;
    case 3:
        p3::main();
        break;
    case 4:
        p4::main();
        break;
    case 5:
        p5::main();
        break;
    default:
        cout << "Wrong entry" << endl;
        break;
    }
    return 0;
}