//#include <iostream>
//using namespace std;
//#include<list>
//
////front();          //返回第一个元素。
////back();           //返回最后一个元素。
//
//
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
//
////赋值
//void test01()
//{
//	list<int>L1;
//	L1.push_back(1);
//	L1.push_back(2);
//	L1.push_back(3);
//	L1.push_back(4);
//	L1.push_back(5);
//
//	printList(L1);
//	//L1[0] 不可以用[]的方式访问list容器中的元素
//	//L1.at(0)也不可以
//	//原因 list是链表，不是用连续线性空间存储数据，迭代器也是不支持随机访问
//
//	//可以用迭代器++的方式访问
//	cout << "第一个元素为：" << L1.front() << endl;
//	cout << "第二个元素为：" << ++L1.front() << endl;
//	cout << "最后一个元素为：" << L1.back() << endl;
//
//	//验证迭代器不支持随机访问
//	list<int>::iterator it = L1.begin();
//	it++;//支持双向
//	it--;
////	it = it + 1;//不支持随机访问
//
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
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}