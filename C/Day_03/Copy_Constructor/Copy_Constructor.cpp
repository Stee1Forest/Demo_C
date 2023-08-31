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

//赋值构造函数：用一个对象去初始化另外一个对象

int main()
{
    Constructor t1(1, 2);
    Constructor t3(1);
    Constructor t2 = t1;        //用t1来初始化t2，这里的 = 为增强的初始化，这里调用的是自定义的拷贝构造函数
    Constructor t4(t1);         //用t1来初始化t4
    t3 = t1;                    //这里的 = 为赋值

    system("pause");
    return 0;
}