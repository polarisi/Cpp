//��˾������Ƹ��10��Ա��(ABCDEFGHI)��10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
//Ա����Ϣ��: ����T�������; ���ŷ�Ϊ:�߻����������з�
//�����10��Ա�����䲿�ź͹���
//ͨ��multimap������Ϣ�Ĳ��� key(���ű��)value(Ա��)
//�ֲ�����ʾԱ����Ϣ
//
//ʵ�ֲ���
//����10��Ա�����ŵ�vector��
//����vector������ȡ��ÿ��Ա���������������
//����󣬽�Ա�����ű����Ϊkey������Ա����Ϊvalue�����뵽multimap������
//�ֲ�����ʾԱ����Ϣ

#include <iostream>
using namespace std;
#include<vector>
#include<map>
#include<string>
#include<ctime>

#define CEHUA 0
#define MEISHU 1
#define YANFA 2	

//Ա������
class Person
{
public:


	string m_Name;
	int m_Salary;
};
//����Ա��
void createPerson(vector<Person>& p)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Person pp;
		pp.m_Name = "Ա��";
		pp.m_Name += nameSeed[i];
		pp.m_Salary = rand() % 10000 + 10000; //10000~19999

		p.push_back(pp);
	}
}

void setGroup(vector<Person>&p, multimap<int, Person>&m)
{
	for (vector<Person>::iterator it = p.begin(); it != p.end(); it++)
	{
		//�������Ա�����
		int deptID = rand() % 3;
		//��Ա�����뵽������
		//key���ű�� value����Ա��
		m.insert(make_pair(deptID, *it));
	}
}

void showPersonByGroup(multimap<int, Person>& s)
{

		//0 A B C D  1 E  F G
		cout << "�߻�������Ϣ��" << endl;
		multimap<int, Person>::iterator pos = s.find(CEHUA);
		int  count = s.count(CEHUA);//ͳ�Ʋ߻����ŵ�����
		for (int i = 0; i < count; i++)
		{
			cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
			pos++;
		}


		//int index = 0;
		//for ( ; pos != s.end() && index < count; pos++ ,index++)
		//{
		//		cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;

		//}
		cout << "--------------------" << endl;

		cout << "����������Ϣ��" << endl;
		pos = s.find(MEISHU);
		count = s.count(MEISHU);//ͳ���������ŵ�����
		for (int i = 0; i < count; i++)
		{
			cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
			pos++;
		}


		cout << "--------------------" << endl;

		cout << "�з�������Ϣ��" << endl;
		pos = s.find(YANFA);
		count = s.count(YANFA);//ͳ���з����ŵ�����
		for (int i = 0; i < count; i++)
		{
			cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
			pos++;
		}




}



int main()
{
	//����������
	srand((unsigned int)time(NULL));

	//1.����Ա��
	vector<Person>vPerson;
	createPerson(vPerson);
	////����
	//for (vector<Person>::iterator it = vPerson.begin(); it != vPerson.end(); it++)
	//{
	//	cout << "������" << it->m_Name << "  ���ʣ�" << it->m_Salary << endl;
	//}

	//2.Ա������
	multimap<int, Person>mPerson;
	setGroup(vPerson, mPerson);

	//3.������ʾԱ��
	showPersonByGroup(mPerson);


	system("pause");
	return 0;
}