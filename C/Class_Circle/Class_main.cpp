#include <iostream>
#include "circle"
#include "point"

using namespace std;

int main()
{
    Circle circle;                                              //定义一个圆circle
    Point point;                                                //定义一个点point

    //设置圆的相关属性
    circle.setCoordinate(2,3);
    circle.setRadius(2);

    //设置点的相关属性
    point.setPoint(4,3);

    //判断点是否在园内
    int flag = point.isInCircle(circle);
    if (flag == 0)
    {
        cout << "This point is on the circle." << endl;
    }
    else if (flag == 1)
    {
        cout << "This point is in the circle." << endl;
    }
    else
    {
        cout << "This point is in the circle." << endl;
    }
    system("pause");
    return 0;
}