////replace if (iterator beg, iterator nd, pred, newvalue);
//// �������滻Ԫ�أ������������滻��ָ��Ԫ��
//// beg ��ʼ������
//// end ����������
//// _pred ν��
//// newvalue �滻����Ԫ��
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
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//class Greater5
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//
//	}
//
//	for_each(v.begin(), v.end(), MyPrint()); //MyPrint�Ƿº��� ����()
//	cout << endl;
//
//	//�滻
//
//	replace_if(v.begin(), v.end(), Greater5(), 3);
//	cout << "�滻��" << endl;
//	for_each(v.begin(), v.end(), myPrint);//myPrint ����ͨ����
//	cout << endl;
//
//
//
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}