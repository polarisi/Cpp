//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//// 查找相邻重复元素
//
////adjacent_find(iterator beg, iterator end);
////查找相邻重复元素，返回相邻元素的第一个位置的迭代器
////beg开始迭代器
////end结束迭代器
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(0);
//	v.push_back(3);
//	v.push_back(0);
//	v.push_back(4);
//	v.push_back(3);
//	v.push_back(3);
//	v.push_back(0);
//
//	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
//	if (pos == v.end())
//	{
//		cout << "没有找到" << endl;
//
//	}
//	else
//	{
//		cout << "找到了,相邻重复元素： " << *pos << endl;
//
//	}
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}