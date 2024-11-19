//练习案例1:设计立方体类
//设计立方体类(Cube)
//求出立方体的面积和体积I
//分别用全局函数和成员函数判断两个立方体是否相等。
#include <iostream>
using namespace std;

class Cube
{
private:

	int l;
public:
	void setL(int length)//设置长
	{
		l = length;
	}
	int  getL()//获取长
	{
		return l;
	}
	int S()
	{
		return 6 * l * l;
	}

	int V()
	{
		return l * l * l;
	}
	//利用全局函数判断 两个立方体是否相等
	bool isSameByClass(Cube &C2)
	{
		if (l == C2.getL())
			return 1;
		else
			return 0;
	}

};

//利用全局函数判断 两个立方体是否相等
bool isSame(Cube& C1, Cube& C2)
{
	if (C1.getL() == C2.getL())
		return 1;
	else
		return 0;
}
//int main()
//{
//	Cube C1;
//	C1.setL(5);
//	cout << C1.getL() << endl;
//	cout << C1.S() << endl;
//	cout << C1.V() << endl;
//
//	Cube C2;
//	C2.setL(6);
//	cout << C2.getL() << endl;
//	cout << C2.S() << endl;
//	cout << C2.V() << endl;
//	//利用全局函数判断
//	bool ret = isSame(C1, C2);
//	if (ret)
//		cout << "C1 == C2" << endl;
//	else
//		cout << "C1 != C2" << endl;
//	//利用成员函数判断
//	bool ret1 = C1.isSameByClass(C2);
//	if (ret1)
//		cout << "C1 == C2" << endl;
//	else
//		cout << "C1 != C2" << endl;
//
//	system("pause");
//	return 0;
//}