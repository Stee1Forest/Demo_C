#include <iostream>

using namespace std;

class First
{

public:
    First(int x)
    {
        first = x;
        cout << "对象：" << first << "构造完成" << endl;
    }
    ~First()
    {
        cout << "对象：" << first << "被析构了" << endl;
    }
protected:

private:
    int first;
};


//构造函数的初始化列表 解决了在Second类中组合了一个First类对象，First类设计了构造函数
//根据构造函数的调用规则，设计First的构造函数则必须要用，否则没有机会初始化A
//新的语法：Constructor::Constructir() : m1(v1), m2(v1, v2), m3(v3)
class Second
{

public:
    //f1(10) 调用了First的构造函数, 构造时必须用初始化列表将const third(10)进行初始化
    Second(int y) : f2(2), f1(1), third(10)
    {
        second = y;
        cout << "对象：" << second << "构造完成" << endl;
    }
    ~Second()
    {
        cout << "对象：" << second << "被析构了" << endl;
    }
    //拷贝构造函数也必须对组合对象初始化列表进行初始化
    Second(const Second & s) : f2(2), f1(1), third(10)
    {
        this->second = s.second;
    }
protected:

private:
    int second;
    const int third;
    First f1;
    First f2;
};

//先执行被组合对象的构造函数，如果被组合对象有多个，则按照定义顺序，而不是按照初始化列表的顺序
//析构函数的调用顺序相反
void display()
{
    //构造和析构顺序
    //对象：1构造完成
    //对象：2构造完成
    //对象：3构造完成
    //对象：3被析构了
    //对象：2被析构了
    //对象：1被析构了
    Second se(3);
}

int main()
{
    display();
    system("pause");
    return 0;
}