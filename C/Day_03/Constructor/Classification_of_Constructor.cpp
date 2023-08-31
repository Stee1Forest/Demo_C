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

int main()
{
    Constructor t1;
    //Constructor t1();         调用无参构造函数不能有();
    Constructor t2 = (3, 4);    //C++对=进行了功能增强（运算符重载）
    t1.printConstructor();
    system("pause");
    return 0;
}