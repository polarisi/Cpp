#include <iostream>
using namespace std;

//����Ȩ��
//����Ȩ�� public ��Ա���ڿ��Է���  ����Ҳ���Է���
//����Ȩ�� protected ��Ա���ڿ��Է���  ���ⲻ���Է���  ����Ҳ���Է��ʸ����еı�������
//˽��Ȩ�� private   ��Ա���ڿ��Է���  ���ⲻ���Է���  ���Ӳ����Է��ʸ��׵�˽������

class Person
{
public:
	//����Ȩ��
	string m_Name;

protected:
	//����Ȩ��
	string m_Car;
private:
	//˽��Ȩ��
	int m_Password;

public:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	}
};

//int main()
//{
//
//	//ʵ��������
//	Person p1;
//	p1.m_Name = "����";
//	//p1.m_Car = "����"; //����Ȩ�޵����������ⲻ�ɷ���
//	//p1.m_Password = 123;//˽��Ȩ�޵����������ⲻ�ɷ���
//
//	p1.func();
//	system("pause");
//
//	return 0;
//}