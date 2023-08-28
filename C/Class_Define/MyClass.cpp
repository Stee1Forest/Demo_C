#include "MyClass"

void MyClass::setRadius(int r)
{
    MyClass::radius = r;
}

double MyClass::getArea()
{
    return 3.14*getRadius()*getRadius();
}

int MyClass::getRadius()
{
    return MyClass::radius;
}