//#include <iostream>
//using namespace std;
//#include<functional>
////内建函数对象 
//
////功能描述:
////实现四则运算
////。其中negate是一元运算，其他都是二元运算
////仿函数原型 :
////template<class T>T pluS<T>               //加法仿函数
////template<class T>T minus<T>              //减法仿函数
////template<class T>T multiplies<T>         //乘法仿函数
////template<class T>T divides<T>            //除法仿函数
////template<class T>T modulus<T>            //取模仿函数
////template<class T>T negate<T>             //取反仿函数  一元
//
//
//void test01()
//{
//	negate<int>n;
//	
//	cout << n(50) << endl;
//}
//
//void test02()
//{
//	plus<int>p;//只允许两个相同类型的元素相加
//	cout << p(10, 20) << endl;
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}