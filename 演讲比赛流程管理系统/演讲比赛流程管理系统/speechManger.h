#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include  "speaker.h"
#include <algorithm>
#include <deque>
#include <functional> //用greater<>()
#include <numeric>
#include <string>
#include <fstream>
#include <ctime>
//提供菜单界面与用户交互
//对演讲比赛流程进行控制
//与文件的读写交互


//设计演讲管理类

class speechManager
{
public:
	//构造函数
	speechManager();

	//菜单功能
	void show_menu();

	//退出功能
	void exit_system();

	//析构函数
	~speechManager();

	void initSpeech(); //初始化容器和属性

	void createSpeaker(); //初始化创建12名选手 

	void startManager(); //开始比赛 比赛整个流程控制

	void speechDraw();//抽签

	void speechContest(); //比赛 
	
	void showScore();

	void saveRecord();//保存记录

	void loadRecord(); //加载记录
	
	void showRecord(); //显示往届记录

	void clearRecord(); //清空记录
	
	bool fileIsEmpty;//判断文件是否为空



	map<int, vector<string>>m_Record; //存放往届记录的容器



	//成员属性
	vector<int>v1; //比赛选手 容器 12人

	vector<int>v2;  //第一轮晋级 容器 6人

	vector<int>vVictory; //胜利 容器 三人

	//存放编号 以及对应的 具体选手 容器
	map<int, Speaker> m_Speaker;


	//记录比赛轮数
	int m_Index;
};