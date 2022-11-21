#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle r1;
    Rectangle r2;

    r1.setlength(5);
    r1.setwidth(2.5);

    r2.setlength(5);
    r2.setwidth(18.9);

    cout << "Rectangle 1: ";
    r1.show();

    cout << "Rectangle 2: ";
    r2.show();

    r1.setlength(15);
    r1.setwidth(6.3);

    cout << "Rectangle 1: ";
    r1.show();

    string msg1 = "Rectangle 1 and 2 ";

    if (r1.sameArea(r2) == 1)
        msg1 += "don't ";

    msg1 += "have the same area.";

    cout << msg1 << endl;
}