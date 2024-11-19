#include <iostream>
using namespace std;

//访问权限
//公共权限 public 成员类内可以访问  类外也可以访问
//保护权限 protected 成员类内可以访问  类外不可以访问  儿子也可以访问父亲中的保护内容
//私有权限 private   成员类内可以访问  类外不可以访问  儿子不可以访问父亲的私有内容

class Person
{
public:
	//公共权限
	string m_Name;

protected:
	//保护权限
	string m_Car;
private:
	//私有权限
	int m_Password;

public:
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}
};

//int main()
//{
//
//	//实例化对象
//	Person p1;
//	p1.m_Name = "李四";
//	//p1.m_Car = "奔驰"; //保护权限的内容在类外不可访问
//	//p1.m_Password = 123;//私有权限的内容在类外不可访问
//
//	p1.func();
//	system("pause");
//
//	return 0;
//}