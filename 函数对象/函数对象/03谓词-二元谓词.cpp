//#include <iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
////��Ԫν��
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////��Ԫν��
//class MyCompare
//{
//public:
//	bool operator()(int v2, int v3)
//	{
//		return v2 > v3;
//	}
//};
//
//void test01()
//{
//	vector<int>v1;
//	v1.push_back(10);
//	v1.push_back(40);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(50);
//
//	sort(v1.begin(), v1.end());
//
//	printVector(v1);
//
//	//ʹ�ú������� �ı��㷨���ԣ���Ϊ�������Ϊ�Ӵ�С
//	sort(v1.begin(), v1.end(), MyCompare());
//	printVector(v1);
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}