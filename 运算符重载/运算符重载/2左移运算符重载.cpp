//#include <iostream>
//using namespace std;
////�������������
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p); //��Ԫ
//
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//private:
//	//���ó�Ա����������������� p.operator<<(cout) �򻯰汾 p<<cout
//	//���ͨ�������ó�Ա����ʵ��<<�����������Ϊ�޷�ʵ��cout�����
//	//void operator<<(cout)
//	//{
//
//	//}
//	int m_A;
//	int m_B;
//
//};
//
////ֻ������ȫ�ֺ���
//ostream& operator<<(ostream &cout, Person &p) //����operator << (cout, p) ��Ϊ cout << p
//{
//	cout <<"m_A = " << p.m_A << endl;
//	cout <<"m_B = " << p.m_B << endl;
//	return cout;
//}
////���þ��������������outҲ���ᱨ��
////ostream& operator<<(ostream& out, Person& p) //����operator << (cout, p) ��Ϊ cout << p
////{
////	out << "m_A = " << p.m_A << endl;
////	out << "m_B = " << p.m_B << endl;
////	return cout;
////}
//void test01()
//{
//	Person p(10, 10);
//	//p.m_A = 1;
//	//p.m_B = 2;
//	//cout << p.m_A << endl;
//	cout << p <<endl;//û������Щ������ƥ��ĵ�<<�����
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
////�ܽ�:������������������Ԫ����ʵ������Զ�����������