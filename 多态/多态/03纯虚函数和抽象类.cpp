//#include <iostream>
//using namespace std;
////纯虚函数和抽象类
//class Base
//{
//public:
//	//纯虚函数
//	//只要有一个纯虚函数，这个类就称为抽象类
//	//抽象类特点
//	//1.无法实例化对象
//	//2.抽象类的子类 必须重写父类中的纯虚函数，否则也属于抽象类
//	virtual void func() = 0;
//
//};
//class Son :public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "Son的func()调用" << endl;
//
//	}
//};
//
//void test01()
//{
//	//Base b; //抽象类是无法实例化对象
//	//new Base; //抽象类是无法实例化对象
//	Son s;    //子类没有重写父类中的虚函数
//	          //子类必须重写父类中的纯虚函数，否则无法实例化对象
//
//	Base* base = new Son; //父类指针
//
//	base->func();
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}