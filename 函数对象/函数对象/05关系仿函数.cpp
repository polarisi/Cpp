//#include <iostream>
//using namespace std;
//#include<functional>
//#include<vector>
//#include<algorithm>
//
////内建函数对象
//// 关系仿函数 
////template<class T>bool equal_to<T>           //等于
////template<class T>bool not_equal_to<T>       //不等于
////template<class T> bool greater<T>           //大于
////template<class T> bool greater_equal<T>     //大于等于
////template<class T> bool less<T>              //小于
////template<class T> bool less_equal<T>        //小于等于
//
//
////大于greater
//class Compare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
// };
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(3);
//	v.push_back(5);
//	v.push_back(2);
//	v.push_back(4);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//template<class T> bool greater<T>
//
//	//sort(v.begin(), v.end(), Compare());
//	//内建函数对象
//	sort(v.begin(), v.end(), greater<int>());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
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