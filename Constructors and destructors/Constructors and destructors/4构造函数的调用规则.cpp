////4.2.4 ���캯�����ù���
////Ĭ������£�c++���������ٸ�һ�������3������
////1.Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)
////2.Ĭ����������(�޲Σ�������Ϊ��)
////3.Ĭ�Ͽ������캯���������Խ���ֵ����
//
////���캯�����ù�������:
////����û������вι��캯����c++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
//// ����û����忽�����캯����c++�������ṩ�������캯��
//
//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	//Person()
//	//{
//	//	cout << "Person���޲ι��캯���ĵ���" << endl;
//	//}
//	Person(int age)
//	{
//		m_Age = age;
//		cout << "Person���вι��캯���ĵ���" << endl;
//	}
//	Person(const Person& p)
//	{
//		//������������ϵ��������ԣ�������������
//		m_Age = p.m_Age;
//		cout << "Person�Ŀ������캯���ĵ���" << endl;
//	}
//	~Person()
//	{
//		cout << "~Person�����ĵ���" << endl;
//	}
//	int m_Age;
//
//};
//
////void test01()
////{
////	Person p;
////	p.m_Age = 18;
////
////	Person p2(p);
////
////	cout << "p2���䣺" << p2.m_Age << endl;
////}
//
//void test02()
//{
//	Person p(28); 
//	Person p2(p);
//
//	//p.m_Age = 18;
//
//	//Person p2(p);
//
//	cout << "p2���䣺" << p2.m_Age << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}