#include <iostream>
#include "MyString"
using namespace std;

int main()
{
    MyString str1;
    MyString str2 = "str2";
    MyString str3 = str2;

    //重载=运算符
    str3 = str2;
    str3 = "str2";

    //重载[]运算符
    str1[0] = 's';

    //重载== !=运算符
    if(str3 == str2)
    {
        cout << "str3等于str2" << endl;
    }
    else
    {
        cout << "str3不等于str2" << endl;
    }

    if(str3 != "str2")
    {
        cout << "str3不等于str2" << endl;
    }
    else
    {
        cout << "str3等于str2" << endl;
    }

    //重载<< >>运算符
    MyString str4;
    cout << "str4.lenth = " << str4.getlength() << endl;
    cout << "str4.pointer = " << str4 << endl;
    cin >> str4;
    cout << "str4.lenth = " << str4.getlength() << endl;
    cout << "str4.pointer = " << str4 << endl;
    system("pause");
    return 0;
}