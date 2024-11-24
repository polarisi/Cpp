//#include <iostream>
//using namespace std;
//#include <string>
////类模板
//template<class NameType, class AgeType >
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
//void test01()
//{
//	//Person<string, int> p1 = { "张三", 15 };
//	Person<string, int> p1( "张三", 15 );
//	p1.showPerson();
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
////总结:类模板和函数模板语法相似，在声明模板template后面加类，此类称为类模板