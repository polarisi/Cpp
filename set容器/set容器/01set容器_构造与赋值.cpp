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
//	//所有的元素在插入的时候会被自动排序 从小到大
//	//不允许插入相同的函数，相同的元素会合并成一个数据  multiset允许
//
//	//拷贝构造
//	set<int>s2(s1);
//	printSet(s2);
//
//	//赋值
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}