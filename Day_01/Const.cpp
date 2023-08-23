#include <iostream>

using namespace std;


//C++中对于const常量不一定分配存储空间，当const常量为全局常量并需要在其他文件中使用或对const常量进行&取地址时才会分配存储空间

//int main()
//{
//	//int* z = 0;
//	////const 修饰一个整型与所处位置无关，两者含义相同，均表示后边变量为一个常量
//	//int const a = 0;
//	//const int b = 0;
//	//
//	////表示add1所指向的值不能被修改，通常可以用作形参来保护原指针中的值不被修改
//	//const int* add1 = &a;
//	//
//	////表示add2本身不能被修改，即add2永远指向初始化z的地址
//	//int* const add2 = z;
//	//
//	////表示add3本身和它所指向的地址的值都不能被修改
//	//const int* const add3 = z;
//	//
//	////z = 0000000000000000, a = 0, b = 0, add1 = 000000745D8FF954, add2 = 0000000000000000, add3 = 0000000000000000
//	////z所指向的地址为0，a和b所保存的值均为0， add1指向a的地址， add2和add3 指向z所指向的地址为0
//	//cout << "z = " << z << ", a = " << a << ", b = " << b << ", add1 = " << add1 << ", add2 = " << add2 << ", add3 = " << add3 << endl;
//
//	//C++对于常量取地址会创建一个由系统管理的内存并将这个内存的地址返回，并且该操作只会进行一次
//	//第一次&a = 0000005D1294FB74
//	//第二次& a = 0000005D1294FB74, p = 0000005D1294FB74
//	//第三次 & a = 0000005D1294FB74, p = 0000005D1294FB74, *p = 20
//	//声明一个常量a,值为10， C++会将这个常量以键值对保存在符号表中
//	const int a = 10;
//
//	//尝试打印常量a的地址
//	cout << "第一次&a = " << &a << endl;
//
//	//声明一个指针变量p并尝试将常量a地址给到p
//	int* p = NULL;
//	p = (int*)&a;
//
//	//再次打印常量a的地址以及p值
//	cout << "第二次&a = " << &a << ", p = " << p << endl;
//
//	//修改p所指向地址对应的值为20
//	*p = 20;
//
//	//第三次打印常量a的地址以及p值和p所指向地址的值
//	cout << "第三次&a = " << &a << ", p = " << p << ", *p = " << *p << endl;
//
//	return 0;
//}