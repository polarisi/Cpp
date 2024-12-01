#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include  "speaker.h"
#include <algorithm>
#include <deque>
#include <functional> //��greater<>()
#include <numeric>
#include <string>
#include <fstream>
#include <ctime>
//�ṩ�˵��������û�����
//���ݽ��������̽��п���
//���ļ��Ķ�д����


//����ݽ�������

class speechManager
{
public:
	//���캯��
	speechManager();

	//�˵�����
	void show_menu();

	//�˳�����
	void exit_system();

	//��������
	~speechManager();

	void initSpeech(); //��ʼ������������

	void createSpeaker(); //��ʼ������12��ѡ�� 

	void startManager(); //��ʼ���� �����������̿���

	void speechDraw();//��ǩ

	void speechContest(); //���� 
	
	void showScore();

	void saveRecord();//�����¼

	void loadRecord(); //���ؼ�¼
	
	void showRecord(); //��ʾ�����¼

	void clearRecord(); //��ռ�¼
	
	bool fileIsEmpty;//�ж��ļ��Ƿ�Ϊ��



	map<int, vector<string>>m_Record; //��������¼������



	//��Ա����
	vector<int>v1; //����ѡ�� ���� 12��

	vector<int>v2;  //��һ�ֽ��� ���� 6��

	vector<int>vVictory; //ʤ�� ���� ����

	//��ű�� �Լ���Ӧ�� ����ѡ�� ����
	map<int, Speaker> m_Speaker;


	//��¼��������
	int m_Index;
};