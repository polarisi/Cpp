//#include <iostream>
//using namespace std;
////��̳��﷨
////ʵ�ʿ����� ������ʹ��
//
//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 1;
//	}
//	int m_A;
//};
//
//class Base2
//{
//public:
//	Base2()
//	{
//		m_A = 2;
//	}
//	int m_A;
//};
////����  ��Ҫ�̳�Base1��Base2
////�﷨ class���� :�̳з�ʽ ����1, �̳з�ʽ ����2...
//class Son : public Base1, public Base2
//{
//public:
//	Son()
//	{
//		m_C = 3;
//		m_D = 4;
//
//	}
//	int m_C;
//	int m_D;
//
//};
//
//void test01()
//{
//	Son s;
//	cout << "size of s:" << sizeof(s) << endl; //16
//	//�������г�����ͬ����Ա����Ҫ������������
//	cout << "Base1::m_A = " << s.Base1::m_A << endl;
//	cout << "Base2::m_A = " << s.Base2::m_A << endl;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}