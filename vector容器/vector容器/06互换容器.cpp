//#include <iostream>
//using namespace std;
//#include <vector>
//
//// ��vec�뱾���Ԫ�ػ���
//// swap(vec);
//
////vector��������
//
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////1.����ʹ��
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//
//	printVector(v2);
//
//	//����
//	v1.swap(v2);
//	cout << "������" << endl;
//	printVector(v1);
//	printVector(v2);
//}
////2.ʵ����;
////����swap���������ڴ�ռ�
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//
//	cout << "v�������ǣ�" << v.capacity() << endl;
//	cout << "v�Ĵ�С�ǣ�" << v.size() << endl;
//
//	//printVector(v);
//	//����ָ����С
//	v.resize(3);
//	cout << "v�������ǣ�" << v.capacity() << endl;
//	cout << "v�Ĵ�С�ǣ�" << v.size() << endl;
//
//	//����swap���������ڴ�ռ�
//
//	vector<int>(v).swap(v);//vector<int>(v)�������� ����v����ʽ����
//
//	cout << "v�������ǣ�" << v.capacity() << endl;
//	cout << "v�Ĵ�С�ǣ�" << v.size() << endl;
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