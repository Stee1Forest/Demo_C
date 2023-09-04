#include <iostream>

using namespace std;

class ThisPointer
{

public:
    ThisPointer(int a, string name)
    {
        this->a = a;
        this->name = name;
    }
    //函数返回一个引用，即返回*this == t1，
    ThisPointer & AddThis(ThisPointer & tmp)
    {
        this->a += tmp.getA();
        return *this;       // *this == *(&t1) == t1
    }
    ~ThisPointer()
    {
        cout << "name = " << this->getName() << "这个对象被析构了" << endl;
    }
    string getName()
    {
        return name;
    }
    int getA()
    {
        return a;
    }
protected:

private:
    string name;
    int a;

};

void seeA()
{
    ThisPointer t1(1,"t1");
    ThisPointer t2(2,"t2");
    //利用return *this在成员函数中修改本体的值
    t1.AddThis(t2);
    cout << "t1.a : " << t1.getA() << endl;
}

int main()
{
    seeA();
    system("pause");
    return 0;
}