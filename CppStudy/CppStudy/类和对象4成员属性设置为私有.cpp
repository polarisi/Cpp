//优点1:将所有成员属性设置为私有，1可以自己控制读写权限
//优点2 : 对于写权限，我们可以检测数据的有效性

#include <iostream>
using namespace std;
#include <string>
//人类
class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName()
	{
		return m_Name;
	}
	//获取年龄
	int getAge()
	{
		return m_Age;
	}
	//设置年龄 0~150
	void setAge(int age)
	{
		if (age < 0 || age >150)
		{
			cout << "年龄输入有误，输入失败！" << endl;
			return;
		}
		m_Age = age;
	}

	//设置偶像
	void setIdol(string idol)
	{
		m_Idol = idol;
	}
private:
	string m_Name;//可读可写
	int m_Age = 18; //只读  也可以写 （0~150）
	string m_Idol; //只读

};

//int main()
//{
//	Person p;
//	//姓名设置
//	//p.m_Name = "张三"
//	p.setName("张三");
//	cout << "姓名：" << p.getName() << endl;
//
//	//年龄设置
//	//p.setAge(12);
//	//p.m_Age = 12;
//
//	p.setAge(160);
//	cout << "年龄：" << p.getAge() << endl;
//
//	//偶像设置
//	p.setIdol("小明");
//	//cout << "年龄：" << p.setIdol()<< endl; //只写，外界不能访问
//
//
//	system("pause");
//	return 0;
//}