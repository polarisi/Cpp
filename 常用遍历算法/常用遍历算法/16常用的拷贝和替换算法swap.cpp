////swap(container c1, container c2);
//// ��������������Ԫ��
//// c1����1
//// c2����2
//
//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test01()
//{
//	vector<int>v;
//	vector<int>v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//		v1.push_back(i+100);
//
//
//	}
//
//	for_each(v.begin(), v.end(), MyPrint()); //MyPrint�Ƿº��� ����()
//	cout << endl;
//	for_each(v1.begin(), v1.end(), MyPrint()); 
//	cout << endl;
//	//�滻
//	cout << "������" << endl;
//	swap(v, v1);
//
//	for_each(v.begin(), v.end(), MyPrint()); 
//	cout << endl;
//	for_each(v1.begin(), v1.end(), MyPrint());
//	cout << endl;
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