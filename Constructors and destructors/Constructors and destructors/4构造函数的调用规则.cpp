////4.2.4 构造函数调用规则
////默认情况下，c++编译器至少给一个类添加3个函数
////1.默认构造函数(无参，函数体为空)
////2.默认析构函数(无参，函数体为空)
////3.默认拷贝构造函数，对属性进行值拷贝
//
////构造函数调用规则如下:
////如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
//// 如果用户定义拷贝构造函数，c++不会再提供其他构造函数
//
//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	//Person()
//	//{
//	//	cout << "Person的无参构造函数的调用" << endl;
//	//}
//	Person(int age)
//	{
//		m_Age = age;
//		cout << "Person的有参构造函数的调用" << endl;
//	}
//	Person(const Person& p)
//	{
//		//将传入的人身上的所有属性，拷贝到我身上
//		m_Age = p.m_Age;
//		cout << "Person的拷贝构造函数的调用" << endl;
//	}
//	~Person()
//	{
//		cout << "~Person函数的调用" << endl;
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
////	cout << "p2年龄：" << p2.m_Age << endl;
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
//	cout << "p2年龄：" << p2.m_Age << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}