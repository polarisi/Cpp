//#include <iostream>
//using namespace std;
//#include <vector>
//#include<algorithm>
//
////�º��� ����ֵ������bool�������� ��Ϊ ν��
////һԪν��
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
// };
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//������������û�д���5������
//	//GreaterFive�����ĺ�������
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//	{
//		cout << "δ�ҵ� " << endl; 
//	}
//	else
//	{
//		cout << "�ҵ��ˣ� ����5��������:" << *it << endl;
//	}
//
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
////����bool���͵ķº�����Ϊν��
////���operator()����һ����������ô����һԪν��
////���operator()����������������ô������Ԫν��