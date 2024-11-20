#include <iostream>
using namespace std;
class Building;
class GoodGay
{
public:
	GoodGay();

	void visit(); //让visit可以访问Building中的私有成员
	void visit2(); //让visit2不可以访问Building中的私有成员

	Building* building;
};

class Building
{
	//告诉编译器 GoodGay下的visit成员函数作为本类的好朋友，可以访问私有成员
	friend void GoodGay::visit();
public:
	Building();
	string m_SittingRoom;
private:
	string m_BedRoom;
};

//类外实现成员函数
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";

}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << "visit函数正在访问：" << building->m_SittingRoom << endl;
	cout << "visit函数正在访问：" << building->m_BedRoom << endl;


}
void GoodGay::visit2()
{
	cout << "visit函数正在访问：" << building->m_SittingRoom << endl;

	//cout << "visit函数正在访问：" << building->m_BedRoom << endl;

}
void test01()
{
	GoodGay gg;
	gg.visit();
}
int main()
{
	test01();
	system("pause");
	return 0;
}