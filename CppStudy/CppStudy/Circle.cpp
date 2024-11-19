#include "Circle.h"

//设置半径
void Circle::setR(int r)
{
	m_R = r;
}
//获取半径
int Circle::getR()
{
	return m_R;
}
//设置圆心
//void setCenter(int x, int y)
//{
//	m_Center.setX(x);
//	m_Center.setY(y);
//}
void Circle::setCenter(Point center)
{
	m_Center = center;
}
//获取圆心;
Point Circle::getCenter()
{
	return m_Center;
}
