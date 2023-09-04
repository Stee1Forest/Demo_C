#include <iostream>

using namespace std;

class ThisPointer
{

public:
    ThisPointer(int a)
    {
        this->a = a;
    }
    //const 对于成员函数来讲放在什么位置没有关系 const void xx = void const xx = void xx() const
    //const 实际修饰的是this指针 
    //const 修饰的是this指针所指向的内存空间
    void opVer(int a) const     // ==> void opVer(const(对应的成员函数的const) ThisPointer * const(编译器自带的const) this, int a)
    {
        a = 100;
        //this.a = 100;
    }
protected:

private:

    int a;

};

int main()
{

    system("pause");
    return 0;
}