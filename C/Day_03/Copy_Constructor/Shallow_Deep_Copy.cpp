#include <iostream>
#include <string.h>

using namespace std;

class Name
{

public:
    Name(const char *myp)
    {
        len = strlen(myp);
        p = (char *) malloc(len + 1);
        strcpy(p, myp);
    }
    //手动编写拷贝构造函数，为对象申请独立的内存空间，避免析构的时候造成野指针
    Name(const Name &name)
    {
        len = name.len;
        p = (char *) malloc(len + 1);
        strcpy(p, name.p);
    }
    ~Name()
    {
        if (p != NULL)
        {
            free(p);
            p = NULL;
            len = 0;
        }
        cout << "该对象已被析构" << endl;
    }
    char * getStr() const
    {
        return p;
    }
protected:

private:
    char * p;
    int len;
};

void displayobj()
{
    Name obj1("First");
    cout << obj1.getStr() << endl;
    //cout << obj1.getStr() << ", " << obj1.getLen() << endl;
    //这里使用了默认拷贝构造函数，将p所指向的内存空间地址进行了拷贝
    //当obj2析构完成后，obj1.p所指向的内存空间已经释放，此时obj1.p已经成为了野指针
    Name obj2 = obj1;
    cout << obj2.getStr() << endl;
    //cout << obj2.getStr() << ", " << obj2.getLen() << endl;
}

int main()
{
    displayobj();
    system("pause");
    return 0;
}