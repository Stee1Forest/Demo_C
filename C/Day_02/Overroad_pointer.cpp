#include <iostream>

using namespace std;

void myfunc(int a, int b)
{
    cout << "a = " << a << ",b = " << b << endl;
}

void myfunc(char * p1, char *p2)
{
    cout << "p1:" << p1 << ",p2:" << p2 << endl;
}

//函数指针
//声明一个函数类型
typedef void (myTypeFunc)(int a, int b);
//myTypeFunc * myfunc = NULL;  //定义一个函数指针，这个指针指向函数的入口地址

//声明一个函数指针类型
typedef void (*myPTypeFunc)(int a, int b);
//myPTypeFunc fp = NULL;  //通过函数指针定义了一个函数指针

//定义一个函数指针变量
void (*myVarPFunc)(int a, int b);

int main()
{
    char str1[] = "aaaa";
    char str2[] = "bbbb";
    myPTypeFunc fp = NULL;
    fp = myfunc;
    fp(1,2);

    //当函数指针遇到函数重载时，会严格按照指针声明的形参个数，类型进行匹配，否则编译不通过
    //fp(str1, str2);
    system("pause");
    return 0;
}