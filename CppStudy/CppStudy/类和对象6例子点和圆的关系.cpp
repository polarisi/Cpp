/*��ϰ����2:���Բ�Ĺ�ϵ
���һ��Բ����(Circle)����һ������(Point)��������Բ�Ĺ�ϵ*/
#include <iostream>
using namespace std;
#include "Circle.h"
//#include "Point.h" //��ΪCircle.h���������

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
//	//���ð뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int getR()
//	{
//		return m_R;
//	}
//	//����Բ��
//	//void setCenter(int x, int y)
//	//{
//	//	m_Center.setX(x);
//	//	m_Center.setY(y);
//	//}
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//��ȡԲ��;
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;
//	
//	Point m_Center;
//};

//�жϵ��Բ�Ĺ�ϵ
void IsInCircle(Circle &c, Point &p)
{
	//�ж�
	if (((c.getCenter().getX() - p.getX()) ^ 2 + (c.getCenter().getY() - p.getY()) ^ 2) > ( c.getR() ^ 2 ) )
	{
		cout << "����Բ��" << endl;
	}
	else if (((c.getCenter().getX() - p.getX()) ^ 2 + (c.getCenter().getY() - p.getY()) ^ 2) == (c.getR() ^ 2))
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}

//int main()
//{
//	//����Բ
//	Circle C;
//	Point P1;
//	P1.setX(0);
//	P1.setY(0);
//	C.setCenter(P1);
//	C.setR(5);
//
//	//������
//	Point P2;
//	P2.setX(0);
//	P2.setY(5);
//
//	//�ж�
//	IsInCircle(C, P2); 
//
//	system("pause");
//	return 0;
//}