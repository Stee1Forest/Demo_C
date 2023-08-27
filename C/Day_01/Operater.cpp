//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//	int a = 10;
//
//	int b = 20;
//
//	//C++将三目运算结果本身返回，因此可以作为运算符的左值
//	//C语言中返回的是一个值，该值位于CPU寄存器中，因此不能被访问
//	//C中同样的实现：(a < b ? &a : &b) = 30
//
//	(a < b ? a : b) = 30;
//
//	cout << "a = " << a << ", b = " << b << endl;
//
//	return 0;
//
//}