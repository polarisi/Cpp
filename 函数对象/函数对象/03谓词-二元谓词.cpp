//#include <iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
////二元谓词
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////二元谓词
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
//	//使用函数对象 改变算法策略，变为排序规则为从大到小
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