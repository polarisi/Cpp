//#include <iostream>
//using namespace std;
//#include<algorithm>
//#include<vector>
//
//void print01(int val)
//{
//	cout << val << " ";
//}
//
//class print02
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//
//	}
//	for_each(v.begin(), v.end(), print01); //��ͨ��������Ҫ�����ţ��������º����� ��Ϊ������()����Ҫ��()
//	cout << endl;
//	
//	for_each(v.begin(), v.end(), print02());//print02()������������
//	cout << endl;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
////�ܽ᣺for_each��ʵ�ʿ���������ñ����㷨��Ҫ������