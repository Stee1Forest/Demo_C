#include <iostream>

using namespace std;

class FriendClass
{

public:
    FriendClass(int a=0, int b=0)
    {
        this->a = a;
        this->b = b;
    }
    //在类中用friend关键字声明一个友元函数，该函数可以访问类的私有属性和方法。
    friend void modifyObject(FriendClass *, int, int);
    int getAttributesA()
    {
        return this->a;
    }
    int getAttributesB()
    {
        return this->b;
    }
protected:

private:
    int a;
    int b;
};

//友元函数可以在任何地方进行定义，但是需要在类中声明
void modifyObject(FriendClass * obj, int a=0, int b=0)
{
    obj->a = a;
    obj->b = b;
}

int main1()
{
    FriendClass test(1, 2);
    cout << "a : " << test.getAttributesA() << ", b : " << test.getAttributesB() << endl;
    modifyObject(&test, 3, 4);
    cout << "a : " << test.getAttributesA() << ", b : " << test.getAttributesB() << endl;
    system("pause");
    return 0;
}