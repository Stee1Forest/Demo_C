#include <iostream>

using namespace std;

//如果填写参数，按照填写值，否则保持默认值
void myPrint(int x = 3){
    cout << "x : " << x << endl;
}

//如果默认参数出现，那么右边的都必须为默认参数
void myPrint2(int m, int x = 3, int y = 4){
    cout << "m : " << m << ", x : " << x << ", y : " << y << endl;
}

//函数占位参数调用时必须写够参数
void myPrint3(int a, int b, int){
    cout << "myPrint3" << endl;
}

//默认参数和占位参数,占位参数有默认值时可以在调用时不进行赋值
//当前占位参数没有什么用处，只是为以后程序扩展留下意义。。
void myPrint4(int a, int b, int = 0){
    cout << "myPrint4" << endl;
}

int main(){
    myPrint();
    myPrint(4);
    myPrint2(3);
    myPrint3(1,2,3);
    myPrint4(1,2,3);
    myPrint4(1,2);
    system("pause");
    return 0;
}