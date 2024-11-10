#include <iostream>
#include <graphics.h>
#include <cstdlib>
#include <ctime>

const int SCR_W = 1024;        //设置屏幕窗口高度
const int SCR_H = 500;         //屏幕窗口宽度
const int MAP_W = SCR_W * 2;   //地图宽度
const int MAP_H = SCR_H * 2;   //地图高度
const int FD_NUM = 200;        //食物小球的数量
const int AI_NUM = 10;        //AI小球的数量


//创建小球结构
struct Ball
{
	double x, y;               //圆点坐标，决定小球在地图上的位置
	double r;                  //球的半径，决定了球的大小
	bool flag;                 //决定小球是否存活 true-1 存活  false-0 死亡
	COLORREF color;            //小球的填充颜色

};

Ball FD_Ball[FD_NUM];          //创建FD_NUM个食物小球
Ball PL_Ball;                  //创建玩家小球
//Ball AI_Balls[AI_NUM];               //创建AI玩家
POINT REF_xy;                   //创建参考点


void SCR_Draw();                //屏幕窗口绘制
void MAP_Draw();                //地图绘制
void FD_Draw();                 //食物小球的绘制
void PL_Draw();                 //玩家小球的绘制
void GAME_Draw();               //游戏绘制
void FD_Init();                 //食物小球的初始化
void PL_Init();                 //玩家小球的初始化
void GAME_Init();               //游戏初始化
void PL_Control(double step);      //玩家小球的控制
void Camera_Pos();              //视角参考坐标
void PL_Eat_Food();             //玩家小球吃食物小球

//void AI_Init();                 //初始化AI小球
//void AI_Draw();                 //绘制AI小球
//void AI_Control();              //添加AI小球的移动逻辑
//void AI_Eat_Food();             //检测 AI 和玩家小球的碰撞
//bool IsCollision(const Ball& ball1, const Ball& ball2);

IMAGE MAP(MAP_W, MAP_H);       //创建地图

int main()
{
	
	initgraph(SCR_W, SCR_H, SHOWCONSOLE); //绘制屏幕窗口

	GAME_Init();                          //游戏的初始化 
	while (true)
	{
		GAME_Draw();                          //游戏绘制
		PL_Control(0.1);                        //游戏控制
		//AI_Control();  // AI小球控制
		//AI_Eat_Food(); // AI吃食物逻辑
	}

	 


	//绘制小球
	//setfillcolor(YELLOW);
	//solidcircle(50, 250, 50);
	std::cin.get(); 

	return 0;
}

//屏幕窗口绘制
void SCR_Draw()
{
	
	SetWorkingImage();          //设置屏幕窗口为当前绘制设备
	Camera_Pos();
	putimage(0, 0, SCR_W, SCR_H, &MAP, REF_xy.x, REF_xy.y);//加载图片

	//	putimage(0, 0, SCR_W, SCR_H, &MAP, PL_Ball.x - 512 > 0 ? PL_Ball.x - 512 : 0, PL_Ball.y - 250 > 0 ? PL_Ball.y - 250 : 0);//加载图片  只能解决左上部分

	
}

//地图绘制
void MAP_Draw()
{
	SetWorkingImage(&MAP);      //设置地图为当前绘图设备
	setbkcolor(WHITE);          //设置当前背景色
	cleardevice();              //使用当前设置背景色，清空图片
}

//食物小球的绘制
void FD_Draw()
{
	for (int i = 0; i < FD_NUM; i++)
	{
		if (FD_Ball[i].flag)
		{
			setfillcolor(FD_Ball[i].color);//设置食物小球的填充色，如果不设置的话就会使用背景色
			solidcircle(FD_Ball[i].x, FD_Ball[i].y, FD_Ball[i].r);//绘制实心食物小球

		}

	}
}

//玩家小球的绘制
void PL_Draw()
{
	if (PL_Ball.flag)
	{
		setfillcolor(PL_Ball.color);                       //设置玩家小球的填充色
		solidcircle(PL_Ball.x, PL_Ball.y, PL_Ball.r);      //绘制实心玩家小球

		setbkmode(TRANSPARENT);                            //设置背景模式为透明
		settextcolor(RED);                                 //设置名称颜色
		settextstyle(17, 0, _T("Consolas"));               //设置名称样式
		outtextxy(PL_Ball.x - 30, PL_Ball.y - 4, _T("天下第一帅")); //设置玩家小球的名称
	}
}




//游戏绘制
void GAME_Draw()
{
	MAP_Draw();
	FD_Draw();     //
	PL_Draw();     //玩家小球绘制
	PL_Eat_Food(); // 检查是否吃掉了食物小球
	//AI_Draw();     // 绘制AI小球
	SCR_Draw();    //屏幕窗口绘制
	

}

//食物小球的初始化
void FD_Init()
{
	
	for (int i = 0; i < FD_NUM; i++)
	{
		FD_Ball[i].x = std:: rand() % MAP_W;   //随机设置食物小球的圆心x [0, MAP_W)
		FD_Ball[i].y = std::rand() % MAP_H;    //随机设置食物小球的圆心y [0, MAP_H)
		FD_Ball[i].r = std::rand() % 20 + 1;   //随机设置食物小球的半径r [1, 10]
		FD_Ball[i].flag = true;                //设置食物小球初始状态为存活
		FD_Ball[i].color = RGB(std::rand() % 256, std::rand() % 256, std::rand() % 256);   //通过设置三原色随机填充食物小球的颜色

	}
}

//玩家小球的初始化
void PL_Init()  
{

	PL_Ball.x = std::rand() % MAP_W;      //随机设置玩家小球的圆心x [0, MAP_W)
	PL_Ball.y = std::rand() % MAP_H;      //随机设置玩家小球的圆心y [0, MAP_H)
	//PL_Ball.r = 2;                       //随机设置食物小球的半径r [1, 10]
	PL_Ball.r = 10;
	PL_Ball.color = GREEN;                //设置玩家小球的颜色为GREEN
	PL_Ball.flag = true;                  //设置玩家初始状态

}

//游戏初始化
void GAME_Init()
{
	std::srand(std::time(0));                  //产生随机种子
	FD_Init();                                 //食物小球的初始化
	PL_Init();                                 //玩家小球的初始化
	//AI_Init();                                 // 初始化AI小球

}

//玩家小球的控制
void PL_Control(double step)
{
	//获取异步按键状态(玩家小球上移一步)
	if (GetAsyncKeyState(VK_UP))
	{
		if (PL_Ball.y - PL_Ball.r > 0)
		{
			PL_Ball.y -= step;
		}
	}
	//获取异步按键状态(玩家小球下移一步)
	if (GetAsyncKeyState(VK_DOWN))
	{
		if (MAP_H - PL_Ball.y - PL_Ball.r > 0)
		{
			PL_Ball.y += step;
		}
	}
	//获取异步按键状态(玩家小球左移一步)
	if (GetAsyncKeyState(VK_LEFT))
	{
		if (PL_Ball.x - PL_Ball.r > 0)
		{
			PL_Ball.x -= step;
		}
	}
	//获取异步按键状态(玩家小球右移一步)
	if (GetAsyncKeyState(VK_RIGHT))
	{
		if (MAP_W - PL_Ball.x - PL_Ball.r > 0)
		{
			PL_Ball.x += step;
		}
	}
}

//获取将视角定位到以玩家为小球中心的相对坐标
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


//// 检查是否吃掉了食物小球
//void PL_Eat_Food()  
//{
//	for (int i = 0; i < FD_NUM; i++)
//	{
//		if (FD_Ball[i].flag) // 如果食物球还存活
//		{
//			double dx = PL_Ball.x - FD_Ball[i].x; // 玩家球和食物球的x轴距离
//			double dy = PL_Ball.y - FD_Ball[i].y; // 玩家球和食物球的y轴距离
//			double distance = sqrt(dx * dx + dy * dy); // 计算两球之间的距离
//
//			// 检查是否发生碰撞（玩家球的半径 + 食物球的半径 >= 两者中心的距离）
//			if (distance <= PL_Ball.r + FD_Ball[i].r)
//			{
//				FD_Ball[i].flag = false; // 吃掉食物，标记食物球为死亡
//				PL_Ball.r += FD_Ball[i].r / 2; // 玩家球变大，增长半径（可以根据食物球的大小调整）
//			}
//		}
//	}
//}

//检查是否吃掉了食物，吃掉则变大，否则游戏结束
void PL_Eat_Food()
{
	for (int i = 0; i < FD_NUM; i++)
	{
		if (FD_Ball[i].flag) // 如果食物小球还存活
		{
			double dx = PL_Ball.x - FD_Ball[i].x; // 玩家小球和食物小球的x轴距离
			double dy = PL_Ball.y - FD_Ball[i].y; // 玩家小球和食物小球的y轴距离
			double distance = sqrt(dx * dx + dy * dy); // 计算两球之间的距离

			// 检查是否发生碰撞
			if (distance <= PL_Ball.r + FD_Ball[i].r)
			{
				if (FD_Ball[i].r > PL_Ball.r) // 如果食物小球比玩家球大
				{
					std::cout << "游戏结束！你碰到了比自己大的球。" << std::endl;
					exit(0); // 退出程序，表示游戏结束
				}
				else
				{
					// 玩家小球吃掉食物小球
					FD_Ball[i].flag = false;           // 将食物小球设为不可见
					PL_Ball.r += FD_Ball[i].r * 0.1;   // 增加玩家小球的半径（或按需调整大小增量）
				}
			}
		}
	}
}


////初始化AI小球
//void AI_Init()
//{
//	for (int i = 0; i < AI_NUM; i++)
//	{
//		AI_Balls[i].x = std::rand() % MAP_W;
//		AI_Balls[i].y = std::rand() % MAP_H;
//		AI_Balls[i].r = std::rand() % 15 + 10; // 随机设置AI小球半径 [5, 20]
//		AI_Balls[i].flag = true; // AI小球存活
//		AI_Balls[i].color = RGB(std::rand() % 256, std::rand() % 256, std::rand() % 256);
//	}
//}
////绘制AI小球
//void AI_Draw()
//{
//	for (int i = 0; i < AI_NUM; i++)
//	{
//		if (AI_Balls[i].flag) // 如果AI小球存活
//		{
//			setfillcolor(AI_Balls[i].color);
//			solidcircle(AI_Balls[i].x, AI_Balls[i].y, AI_Balls[i].r);
//		}
//	}
//}
//
//
////添加AI小球的移动逻辑
//void AI_Control()
//{
//	for (int i = 0; i < AI_NUM; i++)
//	{
//		if (!AI_Balls[i].flag) continue; // 如果AI小球已经死亡，跳过
//
//		// 随机方向移动
//		int direction = std::rand() % 4;
//		int step = 1;
//
//		if (direction == 0 && AI_Balls[i].y - AI_Balls[i].r > 0) // 上移
//			AI_Balls[i].y -= step;
//		else if (direction == 1 && MAP_H - AI_Balls[i].y - AI_Balls[i].r > 0) // 下移
//			AI_Balls[i].y += step;
//		else if (direction == 2 && AI_Balls[i].x - AI_Balls[i].r > 0) // 左移
//			AI_Balls[i].x -= step;
//		else if (direction == 3 && MAP_W - AI_Balls[i].x - AI_Balls[i].r > 0) // 右移
//			AI_Balls[i].x += step;
//	}
//}
//
////检测 AI 和玩家小球的碰撞
//void AI_Eat_Food()
//{
//	for (int i = 0; i < AI_NUM; i++)
//	{
//		if (!AI_Balls[i].flag) continue; // 跳过已死亡的AI
//
//		// 检测 AI 吃食物小球
//		for (int j = 0; j < FD_NUM; j++)
//		{
//			if (FD_Ball[j].flag && IsCollision(AI_Balls[i], FD_Ball[j]))
//			{
//				FD_Ball[j].flag = false; // 食物被吃
//				AI_Balls[i].r += FD_Ball[j].r * 0.1; // 增加AI小球的半径
//			}
//		}
//
//		// 检测 AI 吃其他AI
//		for (int k = 0; k < AI_NUM; k++)
//		{
//			if (k != i && AI_Balls[k].flag && IsCollision(AI_Balls[i], AI_Balls[k]))
//			{
//				if (AI_Balls[i].r > AI_Balls[k].r)
//				{
//					AI_Balls[k].flag = false; // 小的AI被吃
//					AI_Balls[i].r += AI_Balls[k].r * 0.1;
//				}
//			}
//		}
//	}
//}
//#include <cmath> // 为了使用 sqrt 函数
//
//bool IsCollision(const Ball& ball1, const Ball& ball2)
//{
//	// 计算两个小球的中心距离
//	double dx = ball1.x - ball2.x;
//	double dy = ball1.y - ball2.y;
//	double distance = std::sqrt(dx * dx + dy * dy);
//
//	// 判断中心距离是否小于等于两个半径之和
//	return distance <= (ball1.r + ball2.r);
//}



