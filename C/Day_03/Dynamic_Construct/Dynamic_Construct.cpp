#include <iostream>

using namespace std;

//1
//  malloc  free    不会调用类的析构，会造成成员函数申请的内存空间泄漏
//  new     delete

//2
//  new 基础类型变量    分配数组变量    分配类对象
class MyClass
{

public:
    MyClass(int _a)
    {
        m_a = _a;
    }
protected:

private:
    int m_a;
};

// 切记，每一个new 必须对应一个delete否则会造成内存泄漏

//new 分配基础类型
void newBasic()
{
    int * a = new int;
    *a = 1;
    int * b = new int(2);
    cout << "a : " << a << ", b : " << b << endl;
    delete a;
    delete b;
}

//new 分配数组
void newArray()
{
    //c语言分配
    int * ar = (int *)malloc(sizeof(int)*10);
    free(ar);

    int *a = new int[2]{1,2};
    cout << "a : " << *a << endl;
    //释放a
    delete []a;
}

//new 分配对象
void newObject()
{
    //C动态分配对象
    MyClass * c2 = (MyClass *) malloc (sizeof(MyClass));
    free(c2);

    //C++ new 对象，可以调用构造函数初始化对象。
    MyClass *c1 = new MyClass(1);
    delete c1;
}

int main()
{

    system("pause");
    return 0;
}