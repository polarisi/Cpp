#include <iostream>
using namespace std;
//������
class Person
{
public:
	//thisָ��ı��� ��ָ�볣�� ָ���ָ���ǲ������޸ĵ�
	//�൱�� Person * const this
	//����ָ��ָ���ֵҲ�������޸� ��ô const Person * const this �൱�������
	//�ڳ�Ա���������const ���ε���thisָ��ָ����thisָ��ָ���ֵҲ�������޸�
	void showPerson() const //������
	{
		//this->m_A = 100;
		//this = NULL;  //thisָ�벻�����޸�ָ���ָ��
		this->m_B = 100;

	}
	void func()
	{

	}

	int m_A;
	mutable int m_B; //�����������ʹ�ڳ������У�Ҳ�����޸����ֵ��Ҳ�����޸����ֵ���ӹؼ���mutable

};

void test01()
{
	Person p;
	p.showPerson();
}

void  test02()
{
	const Person p; //�ڶ���ǰ��const ��Ϊ������
	//p.m_A = 100;
	p.m_B = 1;//m_B��һ������ֵ���ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func();//������ �����Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����

}
int main()
{

	system("pause");
	return 0;
}