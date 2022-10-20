#include<iostream>
#include<vector>
#include "../Exercise1/hello.cpp"
#include "../Exercise2/ex1-5.cpp"
#include "../Exercise2/ex1-11.cpp"
#include "sum_digits.cpp"
#include "prime_num.cpp"

using namespace std;


int main() {

    cout << "Which program do you want to run" << endl;
    cout << "1 - Hello\n" << "2 - ex1-5\n" << "3 - ex1-11\n" << "4 - Sum of digits\n" << "5 - Prime number" << endl;

    int option;
    cin >> option;

    switch (option) {
    case 1:
        hello();
        break;
    case 2:
        ex1_5();
        break;
    case 3:
        ex1_11();
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