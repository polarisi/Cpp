//#include <iostream>
//using namespace std;
//#include<set>
//
////insert(elem);             //�������в���Ԫ��
////clear();                     //�������Ԫ��
////erase(pos);              //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
////erase(beg, end);         //ɾ������[beg,end)������Ԫ�أ�������һ��Ԫ�صĵ�����
////erase(elem);           //ɾ��������ֵΪelem��Ԫ��
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
//	//��������ʱֻ��insert��ʽ
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
//	s1.erase(++s1.begin(), s1.end());  //��listһ�� û��+ -�����������   iteratorֻ�ܷ������ڵ�Ԫ��
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