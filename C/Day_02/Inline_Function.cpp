#include <iostream>

using namespace std;

//inline void printA(); 内联函数必须和函数体的实现写在一起

//内联函数被C++编译器直接插入函数调用的地方，没有普通函数调用时的额外开销(压栈，跳转，返回)
//C++编译器不一定准许函数的内联请求
//内联函数由编译器处理，宏定义由预处理器处理
//内联函数不能存在任何形式的循环，不能存在过多的判断语句，不能对函数进行取地址操作
inline void printA()
{
    int a = 10;
    cout <<"a : " << a << endl;
}


int main()
{
    printA();
    cout << "Hello" << endl;
    system("pause");
    return 0;
}