#include"speechManger.h"



//���캯��
speechManager::	speechManager()
{
	//��ʼ������������ 
	this->initSpeech();

	//����12��ѡ��  
	this->createSpeaker();

	//���������¼
	this->loadRecord();
}

//�˵�����
void speechManager:: show_menu()
{
	cout << "*******************************************************" << endl;
	cout << "******************* ��ӭ�μ��ݽ����� ******************" << endl;
	cout << "*******************  1.��ʼ�ݽ�����   *****************" << endl;
	cout << "*******************  2.�鿴�����¼   *****************" << endl;
	cout << "*******************  3.��ձ�����¼   *****************" << endl;
	cout << "*******************  0.�˳���������   *****************" << endl;
	cout << "*******************************************************" << endl;
	cout << endl;
}

//�˳�����
void speechManager::exit_system()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);
}

void speechManager:: initSpeech() //��ʼ������������
{
	//�������ÿ�
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	//��ʼ�� ��������
	this->m_Index = 1;

	//����¼������Ҳ���
	this->m_Record.clear();
}
void speechManager::createSpeaker() //��ʼ������12��ѡ��
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;
		for (int i = 0; i < 2; i++)
		{
			sp.m_Score[i] = 0;
		}

		//12��ѡ�ֱ��
		this->v1.push_back(i + 10001);

		//ѡ�ֱ�� �Լ� ��Ӧ��ѡ�� ��ŵ�map ���� ��
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}
	
}

void speechManager::startManager() //��ʼ����
{

	//��һ�ֱ���

	//1.��ǩ
	speechDraw();
	//2.����
	speechContest();
	//3.��ʾ�������
	showScore();
	//�ڶ��ֱ���
	this->m_Index++;
	//1.��ǩ
	speechDraw();

	//2.����
	speechContest();
	//3.��ʾ���ս��
	showScore();
	//4.�������
	this->saveRecord();

	//���ñ���
	//��ʼ������������ 
	this->initSpeech();

	
	//����12��ѡ��  
	this->createSpeaker();

	//���������¼
	this->loadRecord();

	cout << "���������ϣ�" << endl;
	system("pause");
	system("cls");

}
void speechManager:: speechDraw()//��ǩ
{
	cout << "��" << this->m_Index << "�ֱ���ѡ�����ڳ�ǩ" << endl;
	cout << "----------------------------";
	cout << "��ǩ���ݽ�˳�����£�" << endl;
	if (this->m_Index == 1)
	{
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	cout << "----------------------------" << endl;
	system("pause");
	cout << endl;

}

void speechManager::speechContest() //����
{
	cout << "��" << this->m_Index << "�ֱ�����ʼ��" << endl;
	multimap<double, int, greater<double>>groupScore; //��ʱ������ ����key���� valueѡ�ֱ��
	int num = 0; //��¼��Ա ����   ������һ��
	vector<int>v_Src; //����ѡ������
	if (this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}
	//��������ѡ�ֽ��б���
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;
		//��ί���
		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;   //600~1000 / 10
			//cout << score << " ";
			d.push_back(score);
		}
		//cout << endl;
		sort(d.begin(), d.end(), greater<double>());//����
		d.pop_front(); //ȥ�����ֵ
		d.pop_back();  //ȥ����Сֵ

		double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = sum / (double)d.size();  //ƽ����
		//��ӡƽ����
		//cout << "��ţ�" << *it <<" ������" <<this->m_Speaker[*it].m_Name << " ƽ���֣�" << avg << endl;

		//��ƽ���ַŵ� ������
		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;
		//��������� ������ʱ��  С����
		groupScore.insert(make_pair(avg, *it)); //key�ǵ÷� value�Ǿ���ѡ�ֱ��
		//ÿ����ȡ��ǰ����
		if (num % 6 == 0)
		{
			cout << "��" << num / 6 << "С��������Σ�" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{
				cout << "��ţ�" << it->second << " ������" << this->m_Speaker[it->second].m_Name << " �ɼ��ǣ�"
					<< this->m_Speaker[it->second].m_Score[this->m_Index - 1] << endl;
			}
			//ȡ��ǰ����
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end() && count < 3; it++, count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back((*it).second);
				}
				else
				{
					vVictory.push_back((*it).second);
				}
			}
			cout << endl;
			groupScore.clear();
		}

	}
	//cout << endl;
	cout << "----------��" << this->m_Index << "�ֱ��� ���-----------" << endl;
	system("pause");

}

void speechManager:: showScore()
{
	cout << "----------��" << this->m_Index << "�ֽ���ѡ����Ϣ���£�----------" << endl;
	vector<int>v;
	if (this->m_Index == 1)
	{
		v = v2;

	}
	else
	{
		v = vVictory;
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "ѡ�ֱ�ţ�" << *it << " ����:" << this->m_Speaker[*it].m_Name << " �÷֣�" << this->m_Speaker[*it].m_Score[this->m_Index - 1]  << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->show_menu();
}

void speechManager::saveRecord()//�����¼
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app); //��׷�ӵķ�ʽд�ļ� 

	//��ÿ���˵�����д�뵽�ļ���
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		ofs << *it << "," << this->m_Speaker[*it].m_Score[1] << ",";

	}
	ofs << endl;

	//�ر�
	ofs.close();
	cout << "��¼�Ѿ����" << endl;
	//�м�¼�ˣ��ļ���Ϊ��
	this->fileIsEmpty = false;

}
void speechManager::loadRecord() //���ؼ�¼
{
	ifstream ifs("speech.csv", ios::in); //���ļ�
	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		//cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}
	//�ļ�������
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		this->fileIsEmpty = true;
		//cout << "�ļ�Ϊ��" << endl;
		ifs.close();
		return;
	}

	//�ļ���Ϊ��
	this->fileIsEmpty = false;
	ifs.putback(ch);//�������ȡ�ĵ����ַ� �Ż���

	string data;
	
	int index = 0;
	while (ifs >> data)
	{
		//cout << data << endl;
		//10002, 86.675, 10009, 81.3, 10007, 78.55,
		vector<string>v;//�������string�� �ַ���

		int pos = -1;//�鵽','λ�õı���
		int start = 0;
		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				//û���ҵ�
				break;
			}
			string temp = data.substr(start, pos - start);
			//cout << temp << endl;
			v.push_back(temp);
			start = pos + 1;
		}

		this->m_Record.insert(make_pair(index, v));
		index++;
	}
	ifs.close();
	//for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
	//{
	//	cout << it->first << " �ھ���ţ�" << it->second[0] << " �÷֣�" << it->second[1] << endl;
	//}
	
}

void speechManager::showRecord() //��ʾ�����¼
{
	if (this->fileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_Record.size(); i++)
		{
			cout << "��" << i + 1 << "��"
				<< "�ھ���ţ�" << this->m_Record[i][0] << " �÷֣�" << this->m_Record[i][1] << " "
				<< "�Ǿ���ţ�" << this->m_Record[i][2] << " �÷֣�" << this->m_Record[i][3] << " "
				<< "������ţ�" << this->m_Record[i][4] << " �÷֣�" << this->m_Record[i][5] << endl;

		}
	}

	system("pause");
	system("cls");
}

void speechManager::clearRecord() //��ռ�¼
{
	cout << "ȷ�����?" << endl; 
	cout << "1��ȷ��" << endl; 
	cout << "2������"<<endl;

	int select = 0; 
	cin >> select;

	if (select == 1)
	{
		//��ģʽ ios::trunc �������ɾ���ļ�d �����´���
		ofstream ofs("speech.csv", ios::trunc); 
		ofs.close();
		//��ʼ������
		this->initSpeech();
		//����ѡ��
		this->createSpeaker();
		//��ȡ�����¼
		this->loadRecord();

		cout << "��ճɹ�!" << endl;
	}
	system("pause");
	system("cls");

}

//��������
speechManager::~speechManager()
{

}