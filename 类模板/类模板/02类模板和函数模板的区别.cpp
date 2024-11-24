////类模板与函数模板区别主要有两点:
////1.类模板没有自动类型推导的使用方式
////2.类模板在模板参数列表中可以有默认参数
//
//#include <iostream>
//using namespace std;
//template<class NameType, class AgeType = int >
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << this->m_Name << " " << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////1.类模板没有自动类型推导的使用方式
//
//void test01()
//{
//	//Person<string, int> p1 = { "张三", 15 };
//	//Person p1("张三", 15);//无法自动推导 
//
//	Person<string, int> p1( "张三", 15 ); //正确 ，只能用显示指定类型
//	p1.showPerson();
//
//}
//
////2.类模板在模板参数列表中可以有默认参数
//void test02()
//{
//	Person<string>p1("猪", 14);
//	p1.showPerson();
//}
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}