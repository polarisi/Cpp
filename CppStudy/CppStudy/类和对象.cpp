#include <iostream>
using namespace std;

//���һ��Բ�࣬���ܳ�

const double PI = 3.14;
//class����һ���࣬���������ŵľ���������
class Circle
{
	//����Ȩ��
	//����Ȩ��
public:
	int m_r;

	//��Ϊ
	//��ȡ�ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;
	}

};
//int main()
//{
//	//ͨ��Բ�ഴ��һ�������Բ(����)
//	//ʵ���� ��ͨ��һ���࣬����һ������Ĺ��̣�
//	Circle c1;
//	//��Բ��������Խ��и�ֵ
//	c1.m_r = 10;
//
//	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;
//
//	system("pause");
//	return 0;
//}