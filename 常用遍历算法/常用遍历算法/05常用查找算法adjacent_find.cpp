//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//// ���������ظ�Ԫ��
//
////adjacent_find(iterator beg, iterator end);
////���������ظ�Ԫ�أ���������Ԫ�صĵ�һ��λ�õĵ�����
////beg��ʼ������
////end����������
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(0);
//	v.push_back(3);
//	v.push_back(0);
//	v.push_back(4);
//	v.push_back(3);
//	v.push_back(3);
//	v.push_back(0);
//
//	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
//	if (pos == v.end())
//	{
//		cout << "û���ҵ�" << endl;
//
//	}
//	else
//	{
//		cout << "�ҵ���,�����ظ�Ԫ�أ� " << *pos << endl;
//
//	}
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}