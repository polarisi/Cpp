//set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest),
// 求两个集合的差集
// 注意:两个集合必须是有序序列
// beg1 容器1开始迭代器
// end1 容器1结束迭代器
// beg2 容器2开始迭代器
// end2 容器2结束迭代器
// dest 目标容器开始迭代器
//v1:1 2 3 4 5
//v2:3 4 5 6 7
//v1和v2差集：1 2
//v2和v1差集：6 7
#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>

void MyPrint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;

	//目标容器需要开辟空间
	//最特殊情况 大容器包含小容器 开辟空间 取小容器的空间大小


	for (int i = 0; i <= 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);

	}
	//v3.resize(v1.size() < v2.size() ? v1.size():v2.size());
	v3.resize(max(v1.size(), v2.size()));
	//获取差集
	vector<int>::iterator itEnd1 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	for_each(v3.begin(), itEnd1, MyPrint);
	cout << endl;
	v4.resize(v2.size());  //取谁的差集就取谁的大小
	//获取差集
	vector<int>::iterator itEnd2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v4.begin());

	for_each(v4.begin(), itEnd2, MyPrint);
	cout << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}