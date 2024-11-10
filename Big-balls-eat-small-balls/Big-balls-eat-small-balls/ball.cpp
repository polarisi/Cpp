#include <iostream>
#include <graphics.h>
#include <cstdlib>
#include <ctime>

const int SCR_W = 1024;        //������Ļ���ڸ߶�
const int SCR_H = 500;         //��Ļ���ڿ��
const int MAP_W = SCR_W * 2;   //��ͼ���
const int MAP_H = SCR_H * 2;   //��ͼ�߶�
const int FD_NUM = 200;        //ʳ��С�������
const int AI_NUM = 10;        //AIС�������


//����С��ṹ
struct Ball
{
	double x, y;               //Բ�����꣬����С���ڵ�ͼ�ϵ�λ��
	double r;                  //��İ뾶����������Ĵ�С
	bool flag;                 //����С���Ƿ��� true-1 ���  false-0 ����
	COLORREF color;            //С��������ɫ

};

Ball FD_Ball[FD_NUM];          //����FD_NUM��ʳ��С��
Ball PL_Ball;                  //�������С��
//Ball AI_Balls[AI_NUM];               //����AI���
POINT REF_xy;                   //�����ο���


void SCR_Draw();                //��Ļ���ڻ���
void MAP_Draw();                //��ͼ����
void FD_Draw();                 //ʳ��С��Ļ���
void PL_Draw();                 //���С��Ļ���
void GAME_Draw();               //��Ϸ����
void FD_Init();                 //ʳ��С��ĳ�ʼ��
void PL_Init();                 //���С��ĳ�ʼ��
void GAME_Init();               //��Ϸ��ʼ��
void PL_Control(double step);      //���С��Ŀ���
void Camera_Pos();              //�ӽǲο�����
void PL_Eat_Food();             //���С���ʳ��С��

//void AI_Init();                 //��ʼ��AIС��
//void AI_Draw();                 //����AIС��
//void AI_Control();              //���AIС����ƶ��߼�
//void AI_Eat_Food();             //��� AI �����С�����ײ
//bool IsCollision(const Ball& ball1, const Ball& ball2);

IMAGE MAP(MAP_W, MAP_H);       //������ͼ

int main()
{
	
	initgraph(SCR_W, SCR_H, SHOWCONSOLE); //������Ļ����

	GAME_Init();                          //��Ϸ�ĳ�ʼ�� 
	while (true)
	{
		GAME_Draw();                          //��Ϸ����
		PL_Control(0.1);                        //��Ϸ����
		//AI_Control();  // AIС�����
		//AI_Eat_Food(); // AI��ʳ���߼�
	}

	 


	//����С��
	//setfillcolor(YELLOW);
	//solidcircle(50, 250, 50);
	std::cin.get(); 

	return 0;
}

//��Ļ���ڻ���
void SCR_Draw()
{
	
	SetWorkingImage();          //������Ļ����Ϊ��ǰ�����豸
	Camera_Pos();
	putimage(0, 0, SCR_W, SCR_H, &MAP, REF_xy.x, REF_xy.y);//����ͼƬ

	//	putimage(0, 0, SCR_W, SCR_H, &MAP, PL_Ball.x - 512 > 0 ? PL_Ball.x - 512 : 0, PL_Ball.y - 250 > 0 ? PL_Ball.y - 250 : 0);//����ͼƬ  ֻ�ܽ�����ϲ���

	
}

//��ͼ����
void MAP_Draw()
{
	SetWorkingImage(&MAP);      //���õ�ͼΪ��ǰ��ͼ�豸
	setbkcolor(WHITE);          //���õ�ǰ����ɫ
	cleardevice();              //ʹ�õ�ǰ���ñ���ɫ�����ͼƬ
}

//ʳ��С��Ļ���
void FD_Draw()
{
	for (int i = 0; i < FD_NUM; i++)
	{
		if (FD_Ball[i].flag)
		{
			setfillcolor(FD_Ball[i].color);//����ʳ��С������ɫ����������õĻ��ͻ�ʹ�ñ���ɫ
			solidcircle(FD_Ball[i].x, FD_Ball[i].y, FD_Ball[i].r);//����ʵ��ʳ��С��

		}

	}
}

//���С��Ļ���
void PL_Draw()
{
	if (PL_Ball.flag)
	{
		setfillcolor(PL_Ball.color);                       //�������С������ɫ
		solidcircle(PL_Ball.x, PL_Ball.y, PL_Ball.r);      //����ʵ�����С��

		setbkmode(TRANSPARENT);                            //���ñ���ģʽΪ͸��
		settextcolor(RED);                                 //����������ɫ
		settextstyle(17, 0, _T("Consolas"));               //����������ʽ
		outtextxy(PL_Ball.x - 30, PL_Ball.y - 4, _T("���µ�һ˧")); //�������С�������
	}
}




//��Ϸ����
void GAME_Draw()
{
	MAP_Draw();
	FD_Draw();     //
	PL_Draw();     //���С�����
	PL_Eat_Food(); // ����Ƿ�Ե���ʳ��С��
	//AI_Draw();     // ����AIС��
	SCR_Draw();    //��Ļ���ڻ���
	

}

//ʳ��С��ĳ�ʼ��
void FD_Init()
{
	
	for (int i = 0; i < FD_NUM; i++)
	{
		FD_Ball[i].x = std:: rand() % MAP_W;   //�������ʳ��С���Բ��x [0, MAP_W)
		FD_Ball[i].y = std::rand() % MAP_H;    //�������ʳ��С���Բ��y [0, MAP_H)
		FD_Ball[i].r = std::rand() % 20 + 1;   //�������ʳ��С��İ뾶r [1, 10]
		FD_Ball[i].flag = true;                //����ʳ��С���ʼ״̬Ϊ���
		FD_Ball[i].color = RGB(std::rand() % 256, std::rand() % 256, std::rand() % 256);   //ͨ��������ԭɫ������ʳ��С�����ɫ

	}
}

//���С��ĳ�ʼ��
void PL_Init()  
{

	PL_Ball.x = std::rand() % MAP_W;      //����������С���Բ��x [0, MAP_W)
	PL_Ball.y = std::rand() % MAP_H;      //����������С���Բ��y [0, MAP_H)
	//PL_Ball.r = 2;                       //�������ʳ��С��İ뾶r [1, 10]
	PL_Ball.r = 10;
	PL_Ball.color = GREEN;                //�������С�����ɫΪGREEN
	PL_Ball.flag = true;                  //������ҳ�ʼ״̬

}

//��Ϸ��ʼ��
void GAME_Init()
{
	std::srand(std::time(0));                  //�����������
	FD_Init();                                 //ʳ��С��ĳ�ʼ��
	PL_Init();                                 //���С��ĳ�ʼ��
	//AI_Init();                                 // ��ʼ��AIС��

}

//���С��Ŀ���
void PL_Control(double step)
{
	//��ȡ�첽����״̬(���С������һ��)
	if (GetAsyncKeyState(VK_UP))
	{
		if (PL_Ball.y - PL_Ball.r > 0)
		{
			PL_Ball.y -= step;
		}
	}
	//��ȡ�첽����״̬(���С������һ��)
	if (GetAsyncKeyState(VK_DOWN))
	{
		if (MAP_H - PL_Ball.y - PL_Ball.r > 0)
		{
			PL_Ball.y += step;
		}
	}
	//��ȡ�첽����״̬(���С������һ��)
	if (GetAsyncKeyState(VK_LEFT))
	{
		if (PL_Ball.x - PL_Ball.r > 0)
		{
			PL_Ball.x -= step;
		}
	}
	//��ȡ�첽����״̬(���С������һ��)
	if (GetAsyncKeyState(VK_RIGHT))
	{
		if (MAP_W - PL_Ball.x - PL_Ball.r > 0)
		{
			PL_Ball.x += step;
		}
	}
}

//��ȡ���ӽǶ�λ�������ΪС�����ĵ��������
void Camera_Pos()
{
	REF_xy.x = PL_Ball.x - SCR_W / 2;
	REF_xy.y = PL_Ball.y - SCR_H / 2;

	if (REF_xy.x < 0)
		REF_xy.x = 0;
	if (REF_xy.y < 0)
		REF_xy.y = 0;
	if (REF_xy.x > (MAP_W - SCR_W))
		REF_xy.x = MAP_W - SCR_W;
	if (REF_xy.y > (MAP_H - SCR_H))
		REF_xy.y = MAP_H - SCR_H;
}


//// ����Ƿ�Ե���ʳ��С��
//void PL_Eat_Food()  
//{
//	for (int i = 0; i < FD_NUM; i++)
//	{
//		if (FD_Ball[i].flag) // ���ʳ���򻹴��
//		{
//			double dx = PL_Ball.x - FD_Ball[i].x; // ������ʳ�����x�����
//			double dy = PL_Ball.y - FD_Ball[i].y; // ������ʳ�����y�����
//			double distance = sqrt(dx * dx + dy * dy); // ��������֮��ľ���
//
//			// ����Ƿ�����ײ�������İ뾶 + ʳ����İ뾶 >= �������ĵľ��룩
//			if (distance <= PL_Ball.r + FD_Ball[i].r)
//			{
//				FD_Ball[i].flag = false; // �Ե�ʳ����ʳ����Ϊ����
//				PL_Ball.r += FD_Ball[i].r / 2; // ������������뾶�����Ը���ʳ����Ĵ�С������
//			}
//		}
//	}
//}

//����Ƿ�Ե���ʳ��Ե����󣬷�����Ϸ����
void PL_Eat_Food()
{
	for (int i = 0; i < FD_NUM; i++)
	{
		if (FD_Ball[i].flag) // ���ʳ��С�򻹴��
		{
			double dx = PL_Ball.x - FD_Ball[i].x; // ���С���ʳ��С���x�����
			double dy = PL_Ball.y - FD_Ball[i].y; // ���С���ʳ��С���y�����
			double distance = sqrt(dx * dx + dy * dy); // ��������֮��ľ���

			// ����Ƿ�����ײ
			if (distance <= PL_Ball.r + FD_Ball[i].r)
			{
				if (FD_Ball[i].r > PL_Ball.r) // ���ʳ��С���������
				{
					std::cout << "��Ϸ�������������˱��Լ������" << std::endl;
					exit(0); // �˳����򣬱�ʾ��Ϸ����
				}
				else
				{
					// ���С��Ե�ʳ��С��
					FD_Ball[i].flag = false;           // ��ʳ��С����Ϊ���ɼ�
					PL_Ball.r += FD_Ball[i].r * 0.1;   // �������С��İ뾶�����������С������
				}
			}
		}
	}
}


////��ʼ��AIС��
//void AI_Init()
//{
//	for (int i = 0; i < AI_NUM; i++)
//	{
//		AI_Balls[i].x = std::rand() % MAP_W;
//		AI_Balls[i].y = std::rand() % MAP_H;
//		AI_Balls[i].r = std::rand() % 15 + 10; // �������AIС��뾶 [5, 20]
//		AI_Balls[i].flag = true; // AIС����
//		AI_Balls[i].color = RGB(std::rand() % 256, std::rand() % 256, std::rand() % 256);
//	}
//}
////����AIС��
//void AI_Draw()
//{
//	for (int i = 0; i < AI_NUM; i++)
//	{
//		if (AI_Balls[i].flag) // ���AIС����
//		{
//			setfillcolor(AI_Balls[i].color);
//			solidcircle(AI_Balls[i].x, AI_Balls[i].y, AI_Balls[i].r);
//		}
//	}
//}
//
//
////���AIС����ƶ��߼�
//void AI_Control()
//{
//	for (int i = 0; i < AI_NUM; i++)
//	{
//		if (!AI_Balls[i].flag) continue; // ���AIС���Ѿ�����������
//
//		// ��������ƶ�
//		int direction = std::rand() % 4;
//		int step = 1;
//
//		if (direction == 0 && AI_Balls[i].y - AI_Balls[i].r > 0) // ����
//			AI_Balls[i].y -= step;
//		else if (direction == 1 && MAP_H - AI_Balls[i].y - AI_Balls[i].r > 0) // ����
//			AI_Balls[i].y += step;
//		else if (direction == 2 && AI_Balls[i].x - AI_Balls[i].r > 0) // ����
//			AI_Balls[i].x -= step;
//		else if (direction == 3 && MAP_W - AI_Balls[i].x - AI_Balls[i].r > 0) // ����
//			AI_Balls[i].x += step;
//	}
//}
//
////��� AI �����С�����ײ
//void AI_Eat_Food()
//{
//	for (int i = 0; i < AI_NUM; i++)
//	{
//		if (!AI_Balls[i].flag) continue; // ������������AI
//
//		// ��� AI ��ʳ��С��
//		for (int j = 0; j < FD_NUM; j++)
//		{
//			if (FD_Ball[j].flag && IsCollision(AI_Balls[i], FD_Ball[j]))
//			{
//				FD_Ball[j].flag = false; // ʳ�ﱻ��
//				AI_Balls[i].r += FD_Ball[j].r * 0.1; // ����AIС��İ뾶
//			}
//		}
//
//		// ��� AI ������AI
//		for (int k = 0; k < AI_NUM; k++)
//		{
//			if (k != i && AI_Balls[k].flag && IsCollision(AI_Balls[i], AI_Balls[k]))
//			{
//				if (AI_Balls[i].r > AI_Balls[k].r)
//				{
//					AI_Balls[k].flag = false; // С��AI����
//					AI_Balls[i].r += AI_Balls[k].r * 0.1;
//				}
//			}
//		}
//	}
//}
//#include <cmath> // Ϊ��ʹ�� sqrt ����
//
//bool IsCollision(const Ball& ball1, const Ball& ball2)
//{
//	// ��������С������ľ���
//	double dx = ball1.x - ball2.x;
//	double dy = ball1.y - ball2.y;
//	double distance = std::sqrt(dx * dx + dy * dy);
//
//	// �ж����ľ����Ƿ�С�ڵ��������뾶֮��
//	return distance <= (ball1.r + ball2.r);
//}



