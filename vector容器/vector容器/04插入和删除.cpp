//#include <iostream>
//using namespace std;
//#include<vector>
////�����ɾ��
////push back(ele);                                   //β������Ԫ��ele
////pop_back();                                       //ɾ�����һ��Ԫ��
////insert(const iterator pos, ele);                  //������ָ��λ��pos����Ԫ��ele
////insert(const_iterator pos��int count, ele);       //������ָ��λ��pos����count��Ԫ��ele
////erase(const iterator pos);                        //ɾ��������ָ���Ԫ��
////erase(const_iterator start, const iterator end);  //ɾ��ѡ������start��end֮���Ԫ��
////clear();                                          //ɾ������������Ԫ��
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
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	//����
//	printVector(v1);
//
//	//βɾ
//	v1.pop_back();
//	printVector(v1);
//
//	//����
//	v1.insert(v1.begin()+1, 100);
//	printVector(v1);
//
//	//������
//	v1.insert(v1.begin() + 1, 2, 3);
//	printVector(v1);
//
//	//ɾ��
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	//ɾ���ӿ�ʼλ�õ�����λ�õ�����
//	v1.erase(v1.begin()+v1.size()/2, v1.end() - 2);
//	printVector(v1);
//	
//	//���
//	v1.clear();
//	printVector(v1);
//
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}