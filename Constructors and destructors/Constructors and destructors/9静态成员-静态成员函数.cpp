#include <iostream>
using namespace std;
//��̬��Ա����
//���еĶ��󶼹���ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class Person
{
public:
	//��̬��Ա����
	static void func()
	{
		m_A = 100;//��̬��Ա���� ��   ���ʾ�̬��Ա����
		//m_B = 200;//��̬��Ա���� ���� ���ʷǾ�̬��Ա�������޷����ֵ������ĸ�����ĳ�Ա����
		cout << "static void func����" << endl;
	}
	static int m_A; //��̬��Ա����
	int m_B;        //�Ǿ�̬��Ա����

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static void func2()
	{
		cout << "static void func2����" << endl;

	}

};
int Person::m_A = 0;
void test01()
{
	//1.ͨ��������з���
	Person p;
	p.func();
	//2.ͨ���������з���
	Person::func();

	//Person::func2(); ������ʲ���˽�о�̬��Ա����

}
int main()
{
	test01();
	system("pause");
	return 0;
}