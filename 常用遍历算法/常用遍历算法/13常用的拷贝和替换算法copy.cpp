////copy               // ������ָ����Χ��Ԫ�ؿ�������һ������
////replace            // ��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
////replace_if         // ������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
////swap               // ��������������Ԫ��
//
//
////copy(iterator beg, iterator end, iterator dest);
//// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
//// beg ��ʼ������
//// end ����������
//// dest Ŀ����ʼ������
//
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
//void test01()
//{
//	vector<int>v;
//	vector<int>v2;
//
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//
//
//	}
//	v2.resize(v.size());//���ٿռ�
//	//�ϲ�
//	copy(v.begin(), v.end(), v2.begin());
//
//	for_each(v2.begin(), v2.end(), myPrint);
//	cout << endl;
//
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