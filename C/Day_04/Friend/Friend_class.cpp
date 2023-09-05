#include <iostream>

using namespace std;

class MyClassA
{

public:
    //声明MyClassB是MyClassA的友元类，可以在MyClassB中访问MyClassA对象的私有属性
    //友元类通常设计为一种对数据操作或类之间传递消息的辅助类
    friend class MyClassB;
    MyClassA(int a)
    {
        this->a = a;
    }
protected:

private:
    int a;
};

class MyClassB
{

public:
    void Set(int a)
    {
        Aobj.a = a;
    }
    int Get()
    {
        return Aobj.a;
    }
    MyClassB() : Aobj(0){}
protected:

private:
    MyClassA Aobj;
};

int main()
{
    MyClassB objB;
    cout << "Aobj.a : " << objB.Get() << endl;
    objB.Set(10);
    cout << "Aobj.a : " << objB.Get() << endl;
    system("pause");
    return 0;
}