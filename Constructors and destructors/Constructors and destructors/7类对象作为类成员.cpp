//#include <iostream>
//using namespace std;
//#include <string>
////�������Ϊ���Ա
////�ֻ� ��
//class Phone
//{
//public:
//	Phone(string name)
//	{
//		cout << "Phone�Ĺ��캯������" << endl;
//
//		m_PName = name;
//	}
//	~Phone()
//	{
//		cout << "~Phone�����ĵ���" << endl;
//	}
//	//�ֻ���Ʒ������
//	string m_PName;
//};
////�� ��
//class Person
//{
//public:
//	Person(string name, string pName): m_Name(name), m_Phone(pName)//�൱��Phone m_Phone = pName ��ʽת���� 
//	{
//		cout << "Person�Ĺ��캯������" << endl;
//	}
//	~Person()
//	{
//		cout << "~Person�����ĵ���" << endl;
//	}
//	//����
//	string m_Name;
//	//�ֻ�
//	Phone m_Phone;
//};
////��������Ķ�����Ϊ�����Ա������ʱ�ȹ���������ٹ�������  ������˳���빹���෴
//void test01()
//{
//	Person p("����", "ƻ��MAX");
//	cout << p.m_Name << "���ţ�" << p.m_Phone.m_PName << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}