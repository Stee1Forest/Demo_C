#include <iostream>
#include "MyClass"

using namespace std;

int main()
{
    MyClass Circle1;
    Circle1.setRadius(10);
    cout << Circle1.getArea() << endl;
    system("pause");
    return 0;
}