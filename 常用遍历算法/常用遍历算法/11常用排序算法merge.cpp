////merge(iterator begl, iterator end1, iterator beg2, iterator end2, iterator dest);
//// 容器元素合并，并存储到另一容器中
////                             注意:             两个容器必须是有序的
//// beg1 容器1开始迭代器
//// end1容器1结束迭代器
//// beg2容器2开始迭代器
//// end2容器2结束迭代器
//// dest  目标容器开始迭代器
//
//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//#include<functional>
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v;
//	vector<int>v2;
//	vector<int>v3;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//		v2.push_back(i + 1);
//
//	}
//	v3.resize(v.size() + v2.size());//开辟空间
//	//合并
//	merge(v.begin(), v.end(), v2.begin(), v2.end(), v3.begin());
//
//	for_each(v3.begin(), v3.end(), myPrint);
//	cout << endl;
//
//
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}