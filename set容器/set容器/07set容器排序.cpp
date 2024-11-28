//#include <iostream>
//using namespace std;
//#include<set>
//
////set容器默认排序规则为从小到大，掌握如何改变排序规则
//// 主要技术点:
////利用仿函数，可以改变排序规则
//
//void printSet(set<int> &s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2) const  //仿函数
//	{
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	set<int>s1;
//
//	//插入数据时只有insert方式
//	s1.insert(10);
//	s1.insert(5);
//	s1.insert(8);
//	s1.insert(19);
//	s1.insert(16);
//
//	printSet(s1);
//
//	//修改排序规则
//
//
//
//	set<int, MyCompare>s2;
//	s2.insert(8);
//	s2.insert(19);
//	s2.insert(16);
//	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//
//
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}