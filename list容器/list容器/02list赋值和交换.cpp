//#include <iostream>
//using namespace std;
//#include<list>
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
////��ֵ
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
//
//
//	list<int>L2;
//	L2 = L1;
//	printList(L2);
//
//	list<int>L3;
//	L3.assign(L2.begin(), L2.end());
//	printList(L3);
//
//	list<int>L4;
//	L4.assign(10, 11);
//	printList(L4);
//
//}
//
////����
//void test02()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	L1.push_back(50);
//
//	cout << "����ǰ" << endl;
//	printList(L1);
//	
//	list<int>L2;
//	L2.assign(10, 11);
//	printList(L2);
//
//	cout << "������" << endl;
//
//	L1.swap(L2);
//	printList(L1);
//
//	printList(L2);
//
//}
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}