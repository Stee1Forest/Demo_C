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

int main(){
    myPrint();
    myPrint(4);
    myPrint2(3);
    system("pause");
    return 0;
}