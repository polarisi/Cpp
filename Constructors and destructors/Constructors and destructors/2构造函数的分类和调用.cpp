//#include <iostream>
//using namespace std;
//
////对象的初始化和清理
//
////构造函数的分类及调用
//// 按照参数分类  无参构造（默认构造函数）和 有参构造
//// 按照类型分类  普通构造函数  和 拷贝构造函数 
//class Person
//{
//public:
//
//	//构造函数
//	Person()
//	{
//		cout << "Person的无参构造函数的调用" << endl;
//	}
//
//	Person(int a)
//	{
//		age = a;
//		cout << "Person的有参构造函数的调用" << endl;
//	}
//	Person(const Person &p)
//	{
//		//将传入的人身上的所有属性，拷贝到我身上
//		age = p.age;
//		cout << "Person的拷贝构造函数的调用" << endl;
//	}
//	~Person()
//	{
//		cout << "~Person函数的调用" << endl;
//	}
//
//	int age;
//};
//// 构造和析构都是必须有的实现，如果我们自己不提供，编译器会提供一个空实现的构造和析构
//void test01()
//{
//	//1.括号法
//	//Person p1;//默认构造函数的调用
//	//Person p2(10);  //有参构造函数的调用
//	////怎么利用括号法调用拷贝构造函数
//	//Person p3(p2);
//	//cout << "p2的年龄为" << p2.age << endl;
//	//cout << "p3的年龄为" << p3.age << endl;
//	//注意事项，调用默认构造函数的时候，不要加()
//	//因为这行代码，编译器会认为是一个函数的声明，不会认为在创建对象
//	//Person p1();
//
//
//	//2.显示法
//	//Person p1;
//	//Person p2 = Person(10);  //调用有参构造
//	//Person p3 = Person(p2);  //拷贝构造
//	
//	//Person(10);//等号右侧叫匿名对象 特点：当前行执行结束后，系统 会立即回收掉匿名对象
//	//cout << "asd" << endl;
//	// 注意事项2
//	// 不要利用拷贝构造函数初始化匿名对象,编译器认为等价于 Person p3; 是对象声明
//	//Person(p3);
//	
//	//3.隐式转换法
//	Person p4 = 10;  //相当于 Person p4 = Person(10); 有参构造
//	Person p5 = p4;
//}
//
//int main()
//{
//	test01();
//	//Person p;
//	system("pause");
//	return 0;
//}
//
