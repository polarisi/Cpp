//��ϰ����1:�����������
//�����������(Cube)
//������������������I
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ȡ�
#include <iostream>
using namespace std;

class Cube
{
private:

	int l;
public:
	void setL(int length)//���ó�
	{
		l = length;
	}
	int  getL()//��ȡ��
	{
		return l;
	}
	int S()
	{
		return 6 * l * l;
	}

	int V()
	{
		return l * l * l;
	}
	//����ȫ�ֺ����ж� �����������Ƿ����
	bool isSameByClass(Cube &C2)
	{
		if (l == C2.getL())
			return 1;
		else
			return 0;
	}

};

//����ȫ�ֺ����ж� �����������Ƿ����
bool isSame(Cube& C1, Cube& C2)
{
	if (C1.getL() == C2.getL())
		return 1;
	else
		return 0;
}
//int main()
//{
//	Cube C1;
//	C1.setL(5);
//	cout << C1.getL() << endl;
//	cout << C1.S() << endl;
//	cout << C1.V() << endl;
//
//	Cube C2;
//	C2.setL(6);
//	cout << C2.getL() << endl;
//	cout << C2.S() << endl;
//	cout << C2.V() << endl;
//	//����ȫ�ֺ����ж�
//	bool ret = isSame(C1, C2);
//	if (ret)
//		cout << "C1 == C2" << endl;
//	else
//		cout << "C1 != C2" << endl;
//	//���ó�Ա�����ж�
//	bool ret1 = C1.isSameByClass(C2);
//	if (ret1)
//		cout << "C1 == C2" << endl;
//	else
//		cout << "C1 != C2" << endl;
//
//	system("pause");
//	return 0;
//}