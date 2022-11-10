#include <iostream>

using namespace std;

class Rectangle
{
    float length;
    float width;

public:
    Rectangle() {} // Constructor

    void setlength(float length)
    {
        this->length = length;
    }

    void setwidth(float width)
    {
        this->width = width;
    }

    float perimeter()
    {
        return this->length * 2 + this->width * 2;
    }

    float area()
    {
        return this->length * this->width;
    }

    void show()
    {
        cout << "length: " << this->length << " width: " << this->width << " perimeter: " << this->perimeter() << this->perimeter()
             << " area: " << this->area() << endl;
    }

    int sameArea(Rectangle rect)
    {
        return (rect.area() == this->area()) ? 0 : 1;
    }

    double getlegth()
    {
        return this->length;
    }

    double getwidth()
    {
        return this->width;
    }
};