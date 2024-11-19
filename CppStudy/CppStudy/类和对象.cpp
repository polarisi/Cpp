#include <iostream>
using namespace std;

//设计一个圆类，求周长

const double PI = 3.14;
//class代表一个类，类后面紧跟着的就是类名称
class Circle
{
	//访问权限
	//公共权限
public:
	int m_r;

	//行为
	//获取周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}

};
//int main()
//{
//	//通过圆类创建一个具体的圆(对象)
//	//实例化 （通过一个类，创建一个对象的过程）
//	Circle c1;
//	//给圆对象的属性进行赋值
//	c1.m_r = 10;
//
//	cout << "圆的周长为：" << c1.calculateZC() << endl;
//
//	system("pause");
//	return 0;
//}