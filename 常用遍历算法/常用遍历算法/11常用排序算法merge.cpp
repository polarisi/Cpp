////merge(iterator begl, iterator end1, iterator beg2, iterator end2, iterator dest);
//// ����Ԫ�غϲ������洢����һ������
////                             ע��:             �������������������
//// beg1 ����1��ʼ������
//// end1����1����������
//// beg2����2��ʼ������
//// end2����2����������
//// dest  Ŀ��������ʼ������
//
//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//#include<functional>
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v;
//	vector<int>v2;
//	vector<int>v3;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//		v2.push_back(i + 1);
//
//	}
//	v3.resize(v.size() + v2.size());//���ٿռ�
//	//�ϲ�
//	merge(v.begin(), v.end(), v2.begin(), v2.end(), v3.begin());
//
//	for_each(v3.begin(), v3.end(), myPrint);
//	cout << endl;
//
//
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}