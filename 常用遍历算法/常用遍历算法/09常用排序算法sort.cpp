////sort           //��������Ԫ�ؽ�������
////random_shuffle //ϴ�� ָ����Χ�ڵ�Ԫ�������������
////merge          // ����Ԫ�غϲ������洢����һ������
////reverse        // ��תָ����Χ��Ԫ��
//
////sort(iterator beg, iterator end, _Pred);
////// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
////// beg ��ʼ������
////// end ����������
//////_Pred ν��
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
//	v.push_back(1);
//	v.push_back(4);
//	v.push_back(3);
//	v.push_back(2);
//	v.push_back(6);
//	v.push_back(5);
//
//	//����sort��������
//	sort(v.begin(), v.end());
//
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//	//�ı�Ϊ����
//	//sort(v.rbegin(), v.rend());
//	sort(v.begin(), v.end(), greater<int>());
//
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}