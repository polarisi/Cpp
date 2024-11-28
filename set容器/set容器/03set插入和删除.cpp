//#include <iostream>
//using namespace std;
//#include<set>
//
////insert(elem);             //在容器中插入元素
////clear();                     //清除所有元素
////erase(pos);              //删除pos迭代器所指的元素，返回下一个元素的迭代器
////erase(beg, end);         //删除区间[beg,end)的所有元素，返回下一个元素的迭代器
////erase(elem);           //删除容器中值为elem的元素
//
//
//
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
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	s1.erase(8);
//	printSet(s1);
//
//
//	s1.erase(++s1.begin(), s1.end());  //跟list一样 没有+ -运算符的重载   iterator只能访问相邻的元素
//	printSet(s1);
//
//	//s1.clear();
//	//printSet(s1);
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