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
////��С����
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
//	if (L1.empty())
//	{
//		cout << "L1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "L1��Ϊ��" << endl;
//		cout << "L1��Ԫ�ظ����ǣ�" << L1.size() << endl;
//
//	}
//
//	//���� ָ����С
//
//	L1.resize(10);
//	printList(L1);
//
//	L1.resize(15, 11);
//	printList(L1);
//
//	L1.resize(4);
//	printList(L1);
//
//
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