////set union(iterator begl, iterator end1, iterator beg2, iterator end2, iterator dest);
////求两个集合的并集
////注意:两个集合必须是有序序列
//// beg1 容器1开始迭代器
//// end1 容器1结束迭代器
//// beg2 容器2开始迭代器
//// end2 容器2结束迭代器
////dest  目标容器开始迭代器
//
//
//#include <iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//void MyPrint(int val)
//{
//	cout << val << " ";
//}
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	//目标容器需要开辟空间
//	//最特殊情况 大容器小容器互斥 开辟空间 取两个容器一共的空间大小
//
//
//	for (int i = 0; i <= 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//
//	}
//	//v3.resize(v1.size() < v2.size() ? v1.size():v2.size());
//	v3.resize(v1.size() + v2.size());
//	//获取并集
//	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//
//	for_each(v3.begin(), itEnd, MyPrint);
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}