#include <iostream>

using namespace std;

void myPrint(int a)
{
    cout << a << endl;
}

void myPrint(string p)
{
    cout << p << endl;
}

void myPrint(int a, int b)
{
    cout << "a = " << a << ",b = " << b << endl;
}

//返回值不是判断函数重载的标准
int main()
{
    myPrint(1);
    myPrint("name");
    myPrint(1,2);
    system("pause");
    return 0;
}