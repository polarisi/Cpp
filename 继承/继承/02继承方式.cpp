//#include <iostream>
//using namespace std;
////继承方式
//
////公共继承
//
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//
//};
//
//class Son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_A = 10;//父类中的公共权限成员 到子类中依然是公共权限
//		m_B = 11;//父类中的保护权限成员 到子类中依然是保护权限
//		//m_C = 10;//父类中的私有权限成员  子类中不能访问
//
//	}
//};
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;//到了Son1中 m_B是保护权限 类外访问不到
//}
////保护继承
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//
//};
//
//class Son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_A = 10;//父类中的公共权限成员 到子类中变成   保护权限
//		m_B = 11;//父类中的保护权限成员 到子类中依然是 保护权限
//		//m_C = 10;//父类中的私有权限成员  子类中不能访问
//
//	}
//};
//void test02()
//{
//	Son2 s2;
//	//s2.m_A = 100;  //在Son2中 m_A变为保护权限 类外访问不到
//	//s2.m_B = 100;//到了Son1中 m_B是保护权限 类外访问不到
//}
//
////私有继承
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//
//};
//
//class Son3 :protected Base3
//{
//public:
//	void func()
//	{
//		m_A = 10;//父类中的公共权限成员 到子类中变成   私有权限
//		m_B = 11;//父类中的保护权限成员 到子类中变为   私有权限
//		//m_C = 10;//父类中的私有权限成员  子类中不能访问
//
//	}
//};
//void test03()
//{
//	Son3 s3;
//	//s3.m_A = 1000;  //在Son3中 m_A变为私有权限 类外访问不到
//	//s3.m_B = 1000;//到了Son3中 m_B是私有权限 类外访问不到
//}
//
//class GrandSon3 : public Son3
//{
//public:
//	void func()
//	{
//		m_A = 1;  //到了Son3中 m_A变成私有 按理来说这里访问不到
//	}
//};
//int main()
//{
//
//	system("pause");
//	return 0;
//}