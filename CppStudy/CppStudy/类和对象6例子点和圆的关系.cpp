/*练习案例2:点和圆的关系
设计一个圆形类(Circle)，和一个点类(Point)，计算点和圆的关系*/
#include <iostream>
using namespace std;
#include "Circle.h"
//#include "Point.h" //因为Circle.h里面包含了

//class Point
//{
//public:
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};


//class Circle
//{
//public:
//	//设置半径
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//获取半径
//	int getR()
//	{
//		return m_R;
//	}
//	//设置圆心
//	//void setCenter(int x, int y)
//	//{
//	//	m_Center.setX(x);
//	//	m_Center.setY(y);
//	//}
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//获取圆心;
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;
//	
//	Point m_Center;
//};

//判断点和圆的关系
void IsInCircle(Circle &c, Point &p)
{
	//判断
	if (((c.getCenter().getX() - p.getX()) ^ 2 + (c.getCenter().getY() - p.getY()) ^ 2) > ( c.getR() ^ 2 ) )
	{
		cout << "点在圆外" << endl;
	}
	else if (((c.getCenter().getX() - p.getX()) ^ 2 + (c.getCenter().getY() - p.getY()) ^ 2) == (c.getR() ^ 2))
	{
		cout << "点在圆上" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}

//int main()
//{
//	//创建圆
//	Circle C;
//	Point P1;
//	P1.setX(0);
//	P1.setY(0);
//	C.setCenter(P1);
//	C.setR(5);
//
//	//创建点
//	Point P2;
//	P2.setX(0);
//	P2.setY(5);
//
//	//判断
//	IsInCircle(C, P2); 
//
//	system("pause");
//	return 0;
//}