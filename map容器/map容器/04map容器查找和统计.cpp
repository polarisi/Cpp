////find(key);//����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ�����;�������ڣ�����set.end();
////count(key��;//ͳ��key��Ԫ�ظ���
//
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
//		cout << "key:" << (*it).first << " value:" << it->second << endl; //�����ֶ���
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
//	//����  map����������ظ�Ԫ�� �����1 �� 0
//	//multimapͳ�ƽ�����ܴ���1
//	map<int, int>::iterator pos = m.find(2);
//
//
//
//	if (++m.begin() == pos)
//	{
//		cout << "�ҵ��� " << pos->first << " " << pos->second << endl;
//
//	}
//	else
//	{
//		cout << "û�ҵ�" << m.size() << endl;
//	}
//
//	//ͳ��
//	cout << m.count(5) << endl;
//
//
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