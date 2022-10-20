#include<iostream>
#include<vector>
#include "../Exercise1/hello.cpp"
#include "../Exercise2/ex1-5.cpp"
#include "../Exercise2/ex1-11.cpp"
#include "p1.cpp"

using namespace std;


int main() {

    p1::main();

    cout << "Which program do you want to run" << endl;
    cout << "1 - Hollo\n" << "2 - ex1-5\n" << "3 - ex1-11\n" << "4 - " << endl;

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
    default:
        cout << "Wrong entry" << endl;
        break;
    }
}