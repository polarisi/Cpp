////set union(iterator begl, iterator end1, iterator beg2, iterator end2, iterator dest);
////���������ϵĲ���
////ע��:�������ϱ�������������
//// beg1 ����1��ʼ������
//// end1 ����1����������
//// beg2 ����2��ʼ������
//// end2 ����2����������
////dest  Ŀ��������ʼ������
//
//
//#include <iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//void MyPrint(int val)
//{
//	cout << val << " ";
//}
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	//Ŀ��������Ҫ���ٿռ�
//	//��������� ������С�������� ���ٿռ� ȡ��������һ���Ŀռ��С
//
//
//	for (int i = 0; i <= 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//
//	}
//	//v3.resize(v1.size() < v2.size() ? v1.size():v2.size());
//	v3.resize(v1.size() + v2.size());
//	//��ȡ����
//	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//
//	for_each(v3.begin(), itEnd, MyPrint);
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}