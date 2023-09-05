#include <iostream>

using namespace std;

class Complex
{

public:
    Complex(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    int x;
    int y;
protected:

private:

};

//利用函数实现两个对象相加的功能
Complex add(const Complex &c1, const Complex &c2)
{
    Complex tmp;
    tmp.x = c1.x + c2.x;
    tmp.y = c1.y + c2.y;
    return tmp;
}

//C++编译器允许用户对自定义的数据类型进行运算符重载，以满足不同的运算需求
//重载+运算符，使其能够进行两个固定对象的相加
//type operator op(parameter)
Complex operator+(const Complex &c1, const Complex &c2)
{
    Complex tmp;
    tmp.x = c1.x + c2.x;
    tmp.y = c1.y + c2.y;
    return tmp;
}

int main()
{
    Complex c1(1,2), c2(2,3);

    //第一步，使用全局函数进行相加
    //Complex c3 = add(c1, c2);
    //cout << c3.x << " + " << c3.y << "i" << endl;

    //第二步，将函数名换成operator+进行调用
    //运算符重载的本质是函数调用
    //Complex c3 = operator+(c1, c2);
    //cout << c3.x << " + " << c3.y << "i" << endl;

    //第三步，重载运算符+
    Complex c3 = c1 + c2;
    cout << c3.x << " + " << c3.y << "i" << endl;
    system("pause");
    return 0;
}