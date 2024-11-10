//��װ������ʾ�ý���
//��main�����е��÷�װ�õĺ���
#include<iostream>
#include<string>
#include <iomanip>

using namespace std;

#define MAX 1000

//�����ϵ�˵Ľṹ
struct Person
{
	//����
	string m_Name;
	//�Ա� 1�� 2Ů
	int m_Sex;
	//����
	int m_Age;
	//�绰
	string m_Phone;
	//סַ
	string m_Addr;
};

//���ͨѶ¼�Ľṹ��
struct Addressbooks
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];
	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};

//�˵�����
void showMenu()
{
	cout << "**********************" << endl;
	cout << "*****1.�����ϵ��*****" << endl;
	cout << "*****2.��ʾ��ϵ��*****" << endl;
	cout << "*****3.ɾ����ϵ��*****" << endl;
	cout << "*****4.������ϵ��*****" << endl;
	cout << "*****5.�޸���ϵ��*****" << endl;
	cout << "*****6.�����ϵ��*****" << endl;
	cout << "*****0.�˳�ͨѶ¼*****" << endl;
	cout << "**********************" << endl;


}


//1.�����ϵ��
void addPerson(Addressbooks * abs)
{
	//�ж�ͨѶ¼�Ƿ������������������
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		//��Ӿ������ϵ��

		//����
		cout << "������������  " << endl;
		//string name;
		//cin >> name;
		//abs->personArray[abs->m_Size].m_Name = name;
		cin >> abs->personArray[abs->m_Size].m_Name;
		//�Ա�
		cout << "�������Ա�  " << endl;
		cout << "    1������    " << endl;
		cout << "    2����Ů    " << endl;
		int sex = 0;
		while (true)
		{
			//����������1��2����ȷ���˳�ѭ����������������
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else
			{
				cout << "�����������������룡" << endl;
			}
		}
	
		//����
		cout << "����������0~150��  " << endl;
		int age = 0;
		while (true)
		{
			//����������1��2����ȷ���˳�ѭ����������������
			cin >> age;
			if (age >=0 && age<=150)
			{
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			else
			{
				cout << "�����������������룡" << endl;
			}
		}
		//�绰
		cout << "��������ϵ�绰��  " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//סַ
		cout << "�������ַ��  " << endl;
		string addr;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		//����һ��ͨѶ¼������
		abs->m_Size++;

		cout << "��ӳɹ���" << endl;

		system("pause");//�밴���������
		system("cls");
	}
}

//2.��ʾ��ϵ��
void showPerson(Addressbooks * abs)
{
	//�ж�ͨѶ¼�Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��
	//�����Ϊ0����ʾ��ϵ����Ϣ
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		cout << left << setw(20) << "������"
					 << setw(8) << "�ձ�"
					 << setw(8) << "���䣺"
					 << setw(15) << "�绰��"
					 << setw(30) << "סַ��" << endl;
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << left << setw(20) << abs->personArray[i].m_Name
				<< setw(8) << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů")
				<< setw(8) << abs->personArray[i].m_Age
				<< setw(15) << abs->personArray[i].m_Phone
				<< setw(30) << abs->personArray[i].m_Addr << endl;

		}
	}
	system("pause");//�밴���������
	system("cls");
}


//3.ɾ����ϵ��

//�����ϵ���Ƿ����
//������ڣ�������ϵ���������еľ���λ�ã����򷵻�-1
//����1 ͨѶ¼ ����2 �Ա�����
int checkPerson(Addressbooks * abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
			return i;  //�ҵ��˷����±�

	}
	return -1;
}

void deletePerson(Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	int ret = checkPerson(abs, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
		
	}
		
	else
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ���" << endl;
	}

	system("pause");//�밴���������
	system("cls");
}

//4.������ϵ��
void findPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���" << endl;
	string name;
	cin >> name;

	int ret = checkPerson(abs, name);
	if (ret != -1)
	{
		cout << left << setw(20) << "������"
			<< setw(8) << "�ձ�"
			<< setw(8) << "���䣺"
			<< setw(15) << "�绰��"
			<< setw(30) << "סַ��" << endl;
		cout << left << setw(20) << abs->personArray[ret].m_Name
			<< setw(8) << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů")
			<< setw(8) << abs->personArray[ret].m_Age
			<< setw(15) << abs->personArray[ret].m_Phone
			<< setw(30) << abs->personArray[ret].m_Addr << endl;
		}
	else
	{
		cout << "δ�ҵ���ϵ��" << endl;
	}
	system("pause");//�밴���������
	system("cls");
}

//�޸���ϵ��
void modifyPerson(Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = checkPerson(abs, name);
	if (ret == -1)
	{
		cout << "δ�ҵ���ϵ��" << endl;

	}
	else
	{
		cout << "��������Ҫ�޸ĵ���Ϣ" << endl;
		
		cout << "������������  " << endl;
		string name;
		cin >> name;
        abs->personArray[ret].m_Name = name;
		
		cout << "�������ձ�  " << endl;
		cout << "    1������    " << endl;
		cout << "    2����Ů    " << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;

		}
		

		cout << "���������䣺  " << endl;
		int age = 0;
		cin >> age;
        abs->personArray[ret].m_Age = age;
		
		cout << "������绰��  " << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		
		cout << "�������ַ��  " << endl;
		string addr;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;

		cout << "�޸ĳɹ�" << endl;


	}

	system("pause");//�밴���������
	system("cls");
}


//�����ϵ��
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "ͨѶ¼�����" << endl;

	system("pause");//�밴���������
	system("cls");
}

int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	int select = 0;  //�����û�����Ľ��

	


	while (true)
	{
		//�˵�����
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1:
			addPerson(&abs);//1.�����ϵ��  ���õ�ַ���ݣ����������β�
			break;
		case 2:
			showPerson(&abs);//2.��ʾ��ϵ��
			break;
		case 3:              //3.ɾ����ϵ��
		//{
		//	cout << "����" << endl;
		//	string nam;
		//	cin >> nam;
		//	//checkPerson(&abs, nam);
		//	if (checkPerson(&abs, nam) == -1)
		//	{
		//		cout << "���޴���" << endl;
		//	}
		//	else
		//	{
		//		cout << "�ҵ�����" << endl;
		//	}
		//	break;
		//}
			deletePerson(&abs);
			break;
		case 4:
			findPerson(&abs); //4.������ϵ��
			break;
		case 5:
			modifyPerson(&abs);//5.�޸���ϵ��
			break;
		case 6:
			cleanPerson(&abs);//6.�����ϵ��
			break;
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;           //0.�˳�ͨѶ¼
			system("pause");
			return 0;
			break;
		default:
			break;
		}

	}

	
	system("pause");
	return 0;
}