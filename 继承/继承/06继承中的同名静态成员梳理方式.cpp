//#include <iostream>
//using namespace std;
////�̳��е�ͬ����̬��Ա����ʽ
//class Base
//{
//public:
//
//	static void func()
//	{
//		cout << "Base �� func" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base �� func(int a)" << endl;
//	}
//	static int m_A;
//
//};
//int Base::m_A = 100;
//class Son : public Base
//{
//public:
//	static void func()
//	{
//		cout << "Son �� func" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Son �� func(int a)" << endl;
//	}
//	static int m_A;
//
//};
//int Son::m_A = 200;
////ͬ����̬��Ա����
//void test01()
//{
//	//ͨ���������
//	Son s;
//	cout << "Son �� m_A = " << s.m_A << endl;
//	cout << "Base �� m_A = " << s.Base::m_A << endl;
//	//ͨ����������
//	cout << "ͨ���������ʣ�" << endl;
//	cout << "Son �� m_A = " << Son::m_A << endl;
//	cout << "Base �� m_A = " << Base::m_A << endl;
//	//��һ��::����ͨ�������ķ�ʽ���� �ڶ���::������ʸ�����������
//	cout << "Base �� m_A = " << Son::Base::m_A << endl;
//
//
//
//
//}
//void test02()
//{
//
//	//ͨ���������
//	Son s;
//	s.func();
//	s.Base::func();
//	//ͨ����������
//	cout << "ͨ���������ʣ�" << endl;
//	Son::func();
//	Base::func();
//	//��һ��::����ͨ�������ķ�ʽ���� �ڶ���::������ʸ�����������
//	Son::Base::func();
//
//	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص������е�ͬ����Ա����
//	//�������ʸ����б����صĳ�Ա��������Ҫ��������
//	Son::Base::func(100);
//}
//
////ͬ����̬��Ա����
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}