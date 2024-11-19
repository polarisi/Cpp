//在C++中 struct和class唯一的区别就在于 默认的访问权限不同
//区别 :
//struct 默认权限为公共
//class 默认权限为私有

#include <iostream>
using namespace std;

class C1
{
	int m_A;//默认权限是私有
};
struct C2
{
	int m_A;//默认权限是公有
};
//int main()
//{
//	C1 a1;
//	//a1.m_A = 1;//私有 不能访问
//	C2 a2;
//	a2.m_A = 2;
//	system("pause");
//	return 0;
//}