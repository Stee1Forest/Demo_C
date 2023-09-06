#include <iostream>

using namespace std;

class MyClass
{

public:
    friend ostream& operator<<(ostream & out, MyClass & c1);
    MyClass(int a = 0, int b = 0) {};
protected:

private:
    int a;
    int b;
};

//函数返回值当左值需要返回一个引用
ostream& operator<<(ostream & out, MyClass & c1)
{
    out << "a : " << c1.a << ", b : " << c1.b << endl;
    return out;
}

int main()
{
    MyClass c1(1, 2);

    //按照数据类型调用运算符重载
    //1. ostream中添加成员函数?(无法实现，无法拿到ostream源码)
    //2. 在类中声明友元函数：friend ostream& operator<<(ostream & out, MyClass & c1)
    //如此便可以在友元函数中访问
    //函数返回值当左值需要返回一个引用
    //C++中不能用友元函数重载的操作符有：
    //  =   ()  []  ->    
    cout << c1 << "aaaaaaaa" << endl;
    system("pause");
    return 0;
}