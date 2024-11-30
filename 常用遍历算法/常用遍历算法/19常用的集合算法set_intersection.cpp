////set_intersection       // 求两个容器的交集
////set_union              // 求两个容器的并集
////set_difference         // 求两个容器的差集
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
//	//最特殊情况 大容器包含小容器 开辟空间 取小容器的空间大小
//
//
//	for (int i = 0; i <= 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i+5);
//
//	}
//	//v3.resize(v1.size() < v2.size() ? v1.size():v2.size());
//	v3.resize(min(v1.size(), v2.size()));
//	//获取交集
//	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
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
//
////求交集的两个集合必须的有序序列
////目标容器开辟空间需要从两个容器中取小值
////set_intersection返回值既是交集中最后一个元素的位置