#pragma once
#include "Point.h"

class Circle
{
public:
	//���ð뾶
	void setR(int r);

	//��ȡ�뾶
	int getR();

	//����Բ��
	//void setCenter(int x, int y)
	//{
	//	m_Center.setX(x);
	//	m_Center.setY(y);
	//}
	void setCenter(Point center);

	//��ȡԲ��;
	Point getCenter();

private:
	int m_R;

	Point m_Center;
};