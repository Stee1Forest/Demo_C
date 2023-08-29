#include "point"
#include <cmath>

//设置点的坐标
void Point::setPoint(int x, int y)
{
    this->horizontal = x;
    this->vertical = y;
}

//获取点的横坐标
double Point::getHorizontal()
{
    return this->horizontal;
}

//获取点的纵坐标
double Point::getVertical()
{
    return this->vertical;
}

//判断点是否在圆内
int Point::isInCircle(Circle &circle)
{
    double distance = 0;
    double x_distance = 0;
    double y_distance = 0;
    x_distance = circle.getHorizontal() - this->getHorizontal();
    y_distance = circle.getVertical() - this->getVertical();
    distance = sqrt(pow(x_distance, 2) + pow(y_distance, 2));
    if ((distance - circle.getRadius()) >= -0.0000001 && ((distance - circle.getRadius()) <= 0.0000001))
        return 0;
    else if ((distance - circle.getRadius()) < -0.0000001)
        return 1;
    else
        return -1;
}