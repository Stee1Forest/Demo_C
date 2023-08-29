#include <iostream>

using namespace std;

class Constructor
{

public:
    //构造函数可以完成对属性的初始化工作
    Constructor()           //构造函数与析构函数必须与类同名
    {
        cout << "This is Constructor function." << endl;
    }
    //析构函数可以完成对资源的释放
    ~Constructor()          //析构函数在类名前加~
    {
        cout << "This is Destructor function." << endl;
    }
protected:

private:

};

void objectiveDisplay()
{
    //先创建的对象先构造，后析构
    Constructor test1, test2;
}

int main()
{
    objectiveDisplay();
    system("pause");
    return 0;
}