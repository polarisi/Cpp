//#include <iostream>
//using namespace std;
////继承中的构造和析构的顺序
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base构造函数" << endl;
//	}
//
//	~Base()
//	{
//		cout << "Base析构函数" << endl;
//
//	}
//};
//class Son : public Base
//{
//public:
//	Son()
//	{
//		cout << "Son构造函数" << endl;
//	}
//
//	~Son()
//	{
//		cout << "Son析构函数" << endl;
//
//	}
//
//};
//
//void test01()
//{
//	//Base b;
//	Son s;  
//	//继承中构造和析构的顺序
//	//先构造父类Base 再构造子类
//	//析构的顺序与构造相反
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}