//�ŵ�1:�����г�Ա��������Ϊ˽�У�1�����Լ����ƶ�дȨ��
//�ŵ�2 : ����дȨ�ޣ����ǿ��Լ�����ݵ���Ч��

#include <iostream>
using namespace std;
#include <string>
//����
class Person
{
public:
	//��������
	void setName(string name)
	{
		m_Name = name;
	}
	//��ȡ����
	string getName()
	{
		return m_Name;
	}
	//��ȡ����
	int getAge()
	{
		return m_Age;
	}
	//�������� 0~150
	void setAge(int age)
	{
		if (age < 0 || age >150)
		{
			cout << "����������������ʧ�ܣ�" << endl;
			return;
		}
		m_Age = age;
	}

	//����ż��
	void setIdol(string idol)
	{
		m_Idol = idol;
	}
private:
	string m_Name;//�ɶ���д
	int m_Age = 18; //ֻ��  Ҳ����д ��0~150��
	string m_Idol; //ֻ��

};

//int main()
//{
//	Person p;
//	//��������
//	//p.m_Name = "����"
//	p.setName("����");
//	cout << "������" << p.getName() << endl;
//
//	//��������
//	//p.setAge(12);
//	//p.m_Age = 12;
//
//	p.setAge(160);
//	cout << "���䣺" << p.getAge() << endl;
//
//	//ż������
//	p.setIdol("С��");
//	//cout << "���䣺" << p.setIdol()<< endl; //ֻд����粻�ܷ���
//
//
//	system("pause");
//	return 0;
//}