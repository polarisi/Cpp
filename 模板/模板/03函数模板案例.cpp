////案例描述:
////利用函数模板封装一个排序的函数，可以对不同数据类型数组进行排序
////排序规则从大到小，排序算法为选择排序I
////分别利用char数组和int数组进行测试
//
//#include <iostream>
//using namespace std;
//
////实现一个通用 对数组进行排序的函数
////规则 从小到大
////算法 选择
////测试 char 数组 int 数组
//
////交换函数模板
//template<typename T>	//声明一个模板后，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用 数据类型
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////排序算法
//template<class T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;//认定最大值的下标
//		for (int j = i + 1; j < len; j++)
//		{
//			//认定的最大值比遍历的小
//			if (arr[max] < arr[j])
//			{
//				max = j; //更新最大值下标
//			}
//		}
//		if (max != i)
//		{
//			//交换max和i下标的元素
//			mySwap(arr[max], arr[i]);
//		}
//
//	}
//}
//
////提供一个打印数组的模板
//template<class T>
//void printArray(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//		
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//测试char数组
//	char charArr[] = "badcfe";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02()
//{
//	//测试int数组
//	int intArr[] = {7, 5, 1, 3, 8, 9, 6};
//	int num = sizeof(intArr) / sizeof(int);
//	mySort(intArr, num);
//	printArray(intArr, num);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}