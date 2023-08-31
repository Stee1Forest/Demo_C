#include <iostream>

using namespace std;

class Constructor
{

public:
    //无参构造函数
    Constructor()
    {
        m_a = 0;
        m_b = 0;
        cout << "无参数构造函数" << endl;
    }

    //有参构造函数
    Constructor(int a, int b)
    {
        m_a = a;
        m_b = b;
        cout << "有参数构造函数" << endl;
    }

    //有参构造函数重载
    Constructor(int a)
    {
        m_a = a;
        m_b = 0;
        cout << "有参数构造函数重载" << endl;
    }

    //赋值/拷贝构造函数
    Constructor(const Constructor & obj)
    {
        cout << "拷贝构造函数" << endl;
    }
    void printConstructor()
    {
        cout << "普通成员函数" << endl;
    }
protected:

private:
    int m_a;
    int m_b;
};

class Point
{

public:
    Point()
    {
    }
    Point(int ho, int ve)
    {
        this->horizon = ho;
        this->vertical = ve;
        cout << "这是有参构造函数" << endl;
    }
    Point(const Point &point)
    {
        this->horizon = point.horizon;
        this->vertical = point.vertical;
        cout << "这是有参拷贝构造函数" << endl;
    }
    ~Point()
    {
        cout << "这是析构函数，point已销毁" << endl; 
    }
    int getHorizon()
    {
        return this->horizon;
    }
    int getVertical()
    {
        return this->vertical;
    }
protected:

private:
    int horizon;
    int vertical;
};

//赋值构造函数：用一个对象去初始化另外一个对象

int main1()
{
    Constructor t1(1, 2);
    Constructor t3(1);
    Constructor t2 = t1;        //用t1来初始化t2，这里的 = 为增强的初始化，这里调用的是自定义的拷贝构造函数
    Constructor t4(t1);         //用t1来初始化t4
    t3 = t1;                    //这里的 = 为赋值

    system("pause");
    return 0;
}

void printLocation(Point point)
{
    cout << "Horizon = " << point.getHorizon() << ", Vertical = " << point.getVertical() << endl;
}

//Point unknown()
//{
//    Point known(1, 2);      //优化:
//    return known;           //如果返回的对象没有用途，这个对象会被析构,如果是作为赋值，会在赋值结束后析构，如果作为另一个对象的初始化，则会直接转变成该对象
//}

void playLocation()
{
    Point p1(1, 2);                 //调用有参构造函数
    Point p2 = p1;                  //调用拷贝构造函数
    //Point p3;                     //这里声明一个p3，调用无参构造函数完成构造
    //p3 = Point(3, 4);             //Point(3, 4)会创建一个匿名对象并且使用对应的构造函数进行构造，由于p3已经完成了初始化，因此在赋值完成后该匿名对象会析构
    Point p3 = Point(3, 4);         //匿名对象使用有参构造函数进行创建，完成后将匿名对象转正成p3，即类似于p3调用了=后边的构造函数完成了构造
    //Point p4 = unknown();
    printLocation(p2);              //形参调用了拷贝构造函数，用p2去初始化形参
}

int main()
{
    playLocation();
    return 0;
}