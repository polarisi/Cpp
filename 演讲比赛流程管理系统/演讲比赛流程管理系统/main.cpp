//����
//ѧУ����һ���ݽ�����������12���˲μӡ����������֣���һ��Ϊ��̭�����ڶ���Ϊ����
//ÿ��ѡ�ֶ��ж�Ӧ�ı�ţ��� 10001~10012
//������ʽ:���������ÿ��6����;
//��һ�ַ�Ϊ����С�飬���尴��ѡ�ֱ�Ž��г�ǩ��˳���ݽ���
//ʮ����ί�ֱ��ÿ��ѡ�ִ�֣�ȥ����߷ֺ���ͷ֣����ƽ����Ϊ����ѡ�ֵĳɼ�
//��С���ݽ������̭����������������ѡ�֣�ǰ����������������һ�ֵı�����
//�ڶ���Ϊ������ǰ����ʤ��
//ÿ�ֱ���������Ҫ��ʾ����ѡ�ֵ���Ϣ

//������
// ��ʼ�ݽ�����:���������������̣�ÿ�������׶���Ҫ���û�һ����ʾ���û���������������һ���׶�
// �鿴�����¼���鿴֮ǰ����ǰ���������ÿ�α��������¼���ļ��У��ļ���.csv��׺������
//��ձ�����¼:���ļ����������
//�˳��������� : �����˳���ǰ����

#include <iostream>
using namespace std;
#include"speechManger.h"


int main()
{
	//���������
	srand((unsigned int)time(NULL));
	//������������
	speechManager sm;

	////����12��ѡ�ֵĴ���
	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	//{
	//	cout << "ѡ�ֱ�ţ�" << it->first << " �����ǣ�" << it->second.m_Name << " �÷��ǣ�" << it->second.m_Score[0] << endl;
	//}

	int choice = 0; //�����洢�û���ѡ��
	while (true)
	{

		//��ʾ�˵� 
		sm.show_menu();

		cout << "����������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1://��ʼ����
			sm.startManager();
			break;
		case 2://�鿴��¼
			sm.showRecord();
			break;
		case 3://��ռ�¼
			sm.clearRecord();
			break;
		case 0://�˳�
			sm.exit_system();
			break;
		default:
			system("pause");
			break;
		}

	}


	system("pause");
	return 0;
}