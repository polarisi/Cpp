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
//	if (s1.empty())
//	{
//		cout << "s1为空" << endl;
//	}
//	else
//	{
//		cout << "s1不为空，大小是：" << s1.size() << endl;
//
//	}
//
//	set<int>s2;
//	s2.insert(1);
//	s2.insert(4);
//	s2.insert(3);
//	s2.insert(2);
//
//	printSet(s2);
//
//	cout << "交换后：" << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
////set容器不支持resize