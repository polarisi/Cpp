//#include <iostream>
//using namespace std;
////�������캯���ĵ���ʱ��
//class Person
//{
//public:
//	//���캯��
//	Person()
//	{
//		cout << "Person���޲ι��캯���ĵ���" << endl;
//	}
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
//};
//
////1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2�������ǣ�" << p2.m_Age << endl;
//}
//
////2.ֵ���ݵķ�ʽ������������ֵ
//void doWork(Person p)
//{
//
//}
//void test02()
//{
//	Person p;
//	doWork(p);
//
//
//}
//
////3.ֵ��ʽ���ؾֲ�����
//Person doWork2()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//void test03()
//{
//	Person p = doWork2();
//	cout << (int*)&p << endl;
//
//
//
//
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}