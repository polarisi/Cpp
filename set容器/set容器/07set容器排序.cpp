//#include <iostream>
//using namespace std;
//#include<set>
//
////set����Ĭ���������Ϊ��С����������θı��������
//// ��Ҫ������:
////���÷º��������Ըı��������
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
//	bool operator()(int v1, int v2) const  //�º���
//	{
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	set<int>s1;
//
//	//��������ʱֻ��insert��ʽ
//	s1.insert(10);
//	s1.insert(5);
//	s1.insert(8);
//	s1.insert(19);
//	s1.insert(16);
//
//	printSet(s1);
//
//	//�޸��������
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