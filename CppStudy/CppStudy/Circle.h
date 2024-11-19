#pragma once
#include "Point.h"

class Circle
{
public:
	//设置半径
	void setR(int r);

	//获取半径
	int getR();

	//设置圆心
	//void setCenter(int x, int y)
	//{
	//	m_Center.setX(x);
	//	m_Center.setY(y);
	//}
	void setCenter(Point center);

	//获取圆心;
	Point getCenter();

private:
	int m_R;

	Point m_Center;
};