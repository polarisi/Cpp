////size();   //����������Ԫ�ص���Ŀ
////empty();	//�ж������Ƿ�Ϊ��
////swap(st);	//����������������
//
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
//	cout << endl;
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
//
//	if (m.empty())
//	{
//		cout << "mΪ��" << endl;
//		
//	}
//	else
//	{
//		cout << "m��Ϊ�գ���С�ǣ�" << m.size() << endl;
//	}
//
//	//cout << "------------------------" << endl;
//
//	map<int, int>m2;
//	m2.insert(pair<int, int>(11, 450));
//	m2.insert(pair<int, int>(10, 300));
//	m2.insert(pair<int, int>(31, 302));
//
//
//	printMap(m2);
//
//	m.swap(m2);
//
//	cout << "--------������-------------" << endl;
//
//	printMap(m);
//	printMap(m2);
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