#include <iostream>

using namespace std;

class MyClass
{

public:
    MyClass(int a)
    {
        this->a = a;
    }
    void operator()(int a)
    {
        this->a = a;
    }
protected:

private:
    int a;
};

int main()
{
    MyClass t1(0);
    t1(1);
    system("pause");
    return 0;
}