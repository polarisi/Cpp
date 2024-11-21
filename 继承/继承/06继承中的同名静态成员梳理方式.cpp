//#include <iostream>
//using namespace std;
////继承中的同名静态成员处理方式
//class Base
//{
//public:
//
//	static void func()
//	{
//		cout << "Base 下 func" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base 下 func(int a)" << endl;
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
//		cout << "Son 下 func" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Son 下 func(int a)" << endl;
//	}
//	static int m_A;
//
//};
//int Son::m_A = 200;
////同名静态成员属性
//void test01()
//{
//	//通过对象访问
//	Son s;
//	cout << "Son 下 m_A = " << s.m_A << endl;
//	cout << "Base 下 m_A = " << s.Base::m_A << endl;
//	//通过类名访问
//	cout << "通过类名访问：" << endl;
//	cout << "Son 下 m_A = " << Son::m_A << endl;
//	cout << "Base 下 m_A = " << Base::m_A << endl;
//	//第一个::代表通过类名的方式访问 第二个::代表访问父类作用域下
//	cout << "Base 下 m_A = " << Son::Base::m_A << endl;
//
//
//
//
//}
//void test02()
//{
//
//	//通过对象访问
//	Son s;
//	s.func();
//	s.Base::func();
//	//通过类名访问
//	cout << "通过类名访问：" << endl;
//	Son::func();
//	Base::func();
//	//第一个::代表通过类名的方式访问 第二个::代表访问父类作用域下
//	Son::Base::func();
//
//	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中的同名成员函数
//	//如果想访问父类中被隐藏的成员函数，需要加作用域
//	Son::Base::func(100);
//}
//
////同名静态成员函数
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}