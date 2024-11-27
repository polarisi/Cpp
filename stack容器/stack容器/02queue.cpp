//���캯��:
//queue<T> que;                         //queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
//queue(const queue& que);              //�������캯��
//
//��ֵ����:
//queue& operator=(const queue& que);   //���صȺŲ�����
//
//���ݴ�ȡ:
//push(elem);                           //����β���Ԫ��
//pop();                               //�Ӷ�ͷ�Ƴ���һ��Ԫ��
//back();                              //�������һ��Ԫ��
//front();                             //���ص�һ��Ԫ��
//
//��С����:
//empty();                           //�ж϶�ջ�Ƿ�Ϊ��
//size();                            //����ջ�Ĵ�С



#include <iostream>
using namespace std;
#include<queue>
#include<string>
class Person
{
public:
	Person(string  name, int age)
	{
		m_Name = name;
		m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void test01()
{
	//��������
	queue<Person>q;

	//׼������
	Person p1("���", 300);
	Person p2("��ɮ", 25);
	Person p3("�˽�", 200);
	Person p4("ɳɮ", 50);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	//�ж�ֻҪ���в�Ϊ�գ��鿴 ��β ���� ����
	while (!q.empty())
	{
		//�鿴��ͷԪ��
		cout << "��ͷԪ�ء�������" << q.front().m_Name << "���䣺" << q.front().m_Age << endl;
		//�鿴��β
		cout << "��βԪ�ء�������" << q.back().m_Name << "���䣺" << q.back().m_Age << endl;
		cout << endl;
		q.pop();

	}

	cout << "���еĴ�С�ǣ�" << q.size() << endl;


}
int main()
{
	test01();
	system("pause");
	return 0;
}

//��� - push
//���� - pop
//���ض�ͷԪ�ء� front
//���ض�βԪ�� �� back
//�ж϶��Ƿ�Ϊ�� - empty
//���ض��д�С - size