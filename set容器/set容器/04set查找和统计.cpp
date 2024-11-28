//#include <iostream>
//using namespace std;
//#include<set>
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
//void test01()
//{
//	set<int>s1;
//
//	//插入数据时只有insert方式
//	s1.insert(10);
//	s1.insert(5);
//	s1.insert(8);
//	s1.insert(19);
//	//s1.insert(19);
//
//	printSet(s1);
//
//	set<int>::iterator pos = s1.find(5);
//	if (pos == s1.begin())
//	{
//		cout << "找到元素:" << *pos << endl;
//
// 	}
//	else
//	{
//		cout << "没找到" << endl;
//	}
//
//
//	//统计
//	int num = s1.count(5);
//	cout << "5 的个数 " << num << endl;
//	//对于set而言，统计结果 要么是1  要么是0
//}
//
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}