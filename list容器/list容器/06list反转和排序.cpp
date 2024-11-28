//#include <iostream>
//using namespace std;
//#include<list>
//#include<algorithm>
////list 容器反转和排序
//
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//
//	cout << endl;
//}
//bool myCompare(int v1, int v2);
//
//
////赋值
//void test01()
//{
//	list<int>L1;
//	L1.push_back(1);
//	L1.push_back(200);
//	L1.push_back(30);
//	L1.push_back(4);
//	L1.push_back(50);
//
//	printList(L1);
//
//	//反转、
//	L1.reverse();
//	printList(L1);
//	//sort(L1.begin(), L1.end());  不可以用
//	
//	//所有不支持随机访问迭代器的容器  不可以用标准算法
//	//不支持随机访问迭代器的容器，内部会提供一定的算法
//
//	L1.sort();
//	printList(L1);
//
//	L1.sort(myCompare);
//	printList(L1);
//
//	//list<int>L2;
//	//L2 = L1;
//	//printList(L2);
//
//	//list<int>L3;
//	//L3.assign(L2.begin(), L2.end());
//	//printList(L3);
//
//	//list<int>L4;
//	//L4.assign(10, 11);
//	//printList(L4);
//
//}
//bool myCompare(int v1,  int v2)
//{
//	//降序 就让第一个数字大于第二个数字
//	return v1 > v2;
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}