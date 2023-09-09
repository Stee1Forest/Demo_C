#include <iostream>
#include "MyString"
#include <string.h>

//无参构造函数
MyString::MyString()
{
    if(pointer != NULL)
    {
        pointer = NULL;
    }
    lenth = 0;
    pointer = new char[lenth + 1];
    strcpy(pointer, "");
}

//使用字符串进行构造
MyString::MyString(const char * p)
{
    if(p == NULL)
    {
        lenth = 0;
        pointer = new char[lenth + 1];
        strcpy(pointer, "");
    }
    else
    {
        lenth = strlen(p);
        pointer = new char[lenth + 1];
        strcpy(pointer, p);
    }
}

//拷贝构造函数（深拷贝）
MyString::MyString(const MyString& str)
{
    if(str.pointer == NULL)
    {
        if(pointer != NULL)
        {
            pointer = NULL;
        }
        lenth = 0;
        pointer = new char[lenth + 1];
        strcpy(pointer, "");
    }
    else
    {
        lenth = str.lenth;
        pointer = new char[lenth + 1];
        strcpy(pointer, str.pointer);
    }
}

//析构函数
MyString::~MyString()
{
    if (pointer != NULL)
    {
        delete[] pointer;
    }
    lenth = 0;
    pointer = NULL;    
}

//重载=运算符，实现对象数组属性赋值，参数为对象
MyString& MyString::operator=(const MyString& str)
{
    if(pointer != NULL)
    {
        delete[] pointer;
    }
    lenth = str.lenth;
    pointer = new char[lenth + 1];
    strcpy(pointer, str.pointer);
    return *this;
}

//重载=运算符，实现字符串赋值给对象的数组，参数为字符串
MyString& MyString::operator=(const char* p)
{
    if(pointer != NULL)
    {
        delete[] pointer;
    }
    lenth = strlen(p);
    pointer = new char[lenth + 1];
    strcpy(pointer, p);
    return *this;
}

//重载[]运算符，返回对象的数组属性，参数为下标
char& MyString::operator[](int index)
{
    return pointer[index];
}

//重载==运算符，判断对象的数组属性与字符串是否相等，参数为字符串首地址
bool MyString::operator==(const char *p) const
{
    if(this->lenth != strlen(p))
    {
        return false;
    }
    else
    {
        if(!strcmp(this->pointer, p))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

//重载==运算符，判断对象的数组属性与字符串是否相等，参数为MyString对象的引用
bool MyString::operator==(const MyString& str) const
{
    if(this->lenth != str.lenth)
    {
        return false;
    }
    else
    {
        if(!strcmp(this->pointer, str.pointer))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

//重载!=运算符，判断对象的数组属性与字符串是否相等，参数为字符串首地址
bool MyString::operator!=(const char *p) const
{
    if(this->lenth != strlen(p))
    {
        return true;
    }
    else
    {
        if(strcmp(this->pointer, p))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

//重载!=运算符，判断对象的数组属性与字符串是否相等，参数为MyString对象的引用
bool MyString::operator!=(const MyString& str) const
{
    if(this->lenth != str.lenth)
    {
        return true;
    }
    else
    {
        if(strcmp(this->pointer, str.pointer))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

//重载<<运算符，输出对象的数组属性，参数为ostream对象和MyString对象
ostream& operator<<(ostream& out, MyString& str)
{
    out << str.pointer;
    return out;
}

//重载>>运算符，输出对象的数组属性，参数为istream对象和MyString对象
istream& operator>>(istream& in, MyString& str)
{
    in >> str.pointer;
    str.lenth = strlen(str.pointer);
    return in;
}

//重载<运算符，判断对象的数组是否一致
int MyString::operator<(const MyString& str) const
{
    return strcmp(this->pointer, str.pointer);
}

//重载>运算符，判断对象的数组是否一致
int MyString::operator>(const MyString& str) const
{
    return strcmp(this->pointer, str.pointer);
}

//重载<运算符，判断对象的数组和字符串是否一致
int MyString::operator<(const char *p) const
{
    return strcmp(this->pointer, p);
}

//重载<运算符，判断对象的数组和字符串是否一致
int MyString::operator>(const char *p) const
{
    return strcmp(this->pointer, p);
}

