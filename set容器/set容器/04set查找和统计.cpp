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
//	//��������ʱֻ��insert��ʽ
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
//		cout << "�ҵ�Ԫ��:" << *pos << endl;
//
// 	}
//	else
//	{
//		cout << "û�ҵ�" << endl;
//	}
//
//
//	//ͳ��
//	int num = s1.count(5);
//	cout << "5 �ĸ��� " << num << endl;
//	//����set���ԣ�ͳ�ƽ�� Ҫô��1  Ҫô��0
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