//#include <iostream>
//using namespace std;
//#include <vector>
//
//
//// at(int idx);            //��������idx��ָ������
////operator[];              //��������idx��ָ������
////front();                 //���������е�һ������Ԫ��
////back();                  //�������������һ������Ԫ��
//
//
////void printVector(vector<int>& v)
////{
////	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
////	{
////		cout << *it << " ";
////	}
////	cout << endl;
////}
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	//����  ����[]�ķ�ʽ���������е�����
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//	//��ȡ��һ��Ԫ��
//	cout << "��һ��Ԫ�أ� " << v1.front() << endl;
//
//	//��ȡ����Ԫ��
//	cout << "���һ��Ԫ�أ� " << v1.back() << endl;
//	cout << "Ԫ�أ� " << v1.back()-1 << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}