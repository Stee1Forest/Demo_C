#include <iostream>
#include <cmath>

using namespace std;

//Struct 关键字其中成员默认是public
struct Test
{
    int test;
};

class MyCircle
{
//Public 修饰的成员变量和成员函数可以在类的内部和类的外部被访问
    double private1;    //没有权限修饰的成员变量和函数默认是有私有属性的
public:
    double radius;  //属性，成员变量
    double area;    //属性，成员变量
    double getRadius()  //方法，成员函数
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

//Protected修饰成员变量和成员函数只能在类的内部被访问，在子类中可以继续使用
protected:

//Private修饰成员变量和成员函数只能在类的内部被访问
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