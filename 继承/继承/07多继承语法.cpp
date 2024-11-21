//#include <iostream>
//using namespace std;
////多继承语法
////实际开发中 基本不使用
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
////子类  需要继承Base1和Base2
////语法 class子类 :继承方式 父类1, 继承方式 父类2...
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
//	//当父类中出现了同名成员，需要加作用域区分
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