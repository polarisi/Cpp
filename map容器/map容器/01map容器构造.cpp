////���:
////map������Ԫ�ض���pair
////pair�е�һ��Ԫ��Ϊkey(��ֵ)�����������ã��ڶ���Ԫ��Ϊvalue(ʵֵ)
////����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����
////���� : I
////map / multimap���ڹ���ʽ����, ���ײ�ṹ���ö�����ʵ��
////�ŵ� :
////	���Ը���keyֵ�����ҵ�valueֵmap��multimap
////���� :
////map���������������ظ�keyֵԪ��
////multimap�������������ظ�keyֵԪ��
//
////map���� �� ����͸�ֵ
//
//#include <iostream>
//using namespace std;
//#include<map>
//
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key:" << (*it).first <<" value:" << it->second << endl; //�����ֶ���
//
//	}
//
//}
//void test01()
//{
//	//����map����
//	map<int, int> m;
//	
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(5, 50));
//
//	printMap(m);
//
//	cout << "------------------------" << endl;
//	//��������
//	map<int, int>m2(m);
//	printMap(m2);
//
//	cout << "------------------------" << endl;
//
//	//��ֵ
//	map<int, int>m3 = m;
//	printMap(m3);
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