//#include <iostream>
//using namespace std;
//class Person
//{
//public:
//	Person(int age)
//	{
//		//m_Age = age;
//		//this 指针指向 被调用的成员函数所属的对象
//		this->age = age;
//	}
//	Person& PersonAddAge(Person &p)  //引用返回原来的对象，如果不加引用返回新的对象 
//	{
//		this->age += p.age;
//		return *this;  ////this指向p2的指针，而*this指向的就是p2这个对象本体
//	}
//
//	//int m_Age;
//	int age;
//};
////1 解决名称冲突
//void test01()
//{
//	Person p1(18);
//	cout << "p1的年龄是：" << p1.age << endl;
//}
//
////2.返回对象本身用*this
//void test02()
//{
//	Person p1(18);
//	Person p2(15);
//	//链式编程思想
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2的年龄是：" << p2.age << endl;
//
//}
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}