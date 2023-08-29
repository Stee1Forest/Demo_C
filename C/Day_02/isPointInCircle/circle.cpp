#include "circle"

//实现设置圆心坐标
void Circle::setCoordinate(int x, int y)
{
    this->horizontal = x;
    this->vertical = y;
}

//实现获取圆心横坐标
double Circle::getHorizontal()
{
    return this->horizontal;
}

//实现获取圆心纵坐标
double Circle::getVertical()
{
    return this->vertical;
}

//实现设置圆的半径
void Circle::setRadius(int r)
{
    this->radius = r;
}

//实现获取圆的面积
double Circle::getArea()
{
    this->setArea();
    return this->area;
}

//实现设置圆的面积，该函数只能且在获取圆的面积的时候调用
void Circle::setArea()
{
    this->area = 3.14*this->radius*this->radius;
}

//实现获取圆的半径
double Circle::getRadius()
{
    return this->radius;
}