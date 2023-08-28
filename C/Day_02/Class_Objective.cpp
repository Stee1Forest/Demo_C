#include <iostream>
#include <cmath>

using namespace std;

class MyCircle
{

public:
    double radius;  //属性，成员变量
    double area;    //属性，成员变量
    double getRadius()
    {
        return radius;
    }
    void setRadius(double tmpr)
    {
        radius = tmpr;
    }
    double setArea()
    {
        double tmparea = 3.14*pow(radius,2);
        return tmparea;
    }
protected:

private:
    double tmp;
};


int main()
{
    MyCircle circle1;
    circle1.setRadius(10);
    cout << circle1.getRadius() << endl;
    cout << circle1.setArea() << endl;
    cout << "Hello World" << endl;
    system("pause");
    return 0;
}