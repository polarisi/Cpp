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
//void printMultiet(multiset<int>& ms)
//{
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
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
//	//��������ʱֻ��insert��ʽ
//	pair<set<int>::iterator, bool>ret = s1.insert(10);
//	if (ret.second)
//	{
//		cout << "��һ�β���ɹ�" << endl;
//
//	}
//	else
//	{
//		cout << "����ʧ��" << endl;
//	}
//
//	ret = s1.insert(10);
//	if (ret.second)
//	{
//		cout << "�ڶ��β���ɹ�" << endl;
//
//	}
//	else
//	{
//		cout << "����ʧ��" << endl;
//	}
//
//	multiset<int>ms1;
//	ms1.insert(10);
//	ms1.insert(10);
//
//	printMultiet(ms1);
//
//
//	//s1.insert(5);
//	//s1.insert(8);
//	//s1.insert(19);
//	////s1.insert(19);
//
//	//printSet(s1);
//
//	//s1.insert(10);
//
//	////��������
//	//set<int>s2(s1);
//	//printSet(s2);
//
//	////��ֵ
//	//set<int>s3;
//	//s3 = s2;
//	//printSet(s3);
//
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}