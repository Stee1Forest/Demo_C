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

    //赋值/拷贝构造函数
    Constructor(const Constructor & obj)
    {
        cout << "拷贝构造函数" << endl;
    }
protected:

private:
    int m_a;
    int m_b;
};

int main()
{
    Constructor t1;
    system("pause");
    return 0;
}