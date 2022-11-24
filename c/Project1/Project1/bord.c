
#include "bord.h";

void display() 
{
	printf("**************************\n");
	printf("****  1.游戏  0.退出  ****\n");
	printf("**************************\n");

}
void game()
{
	char ret = 0;
	char bord1[ROW][COL] = {0};
	Initbord(bord1,ROW,COL);//进行初始化
	Displaybord(bord1, ROW, COL);//进行打印
	printf("玩家先下>\n");
	while (1)
	{
		//玩家先下
		PlayMove(bord1, ROW, COL);
		//打印·一遍
		Displaybord(bord1, ROW, COL);
		//判断是否是玩家赢
		ret=IsWin(bord1, ROW, COL);
		//返回*玩家赢
		//返回#电脑赢
		//返回Q平局
		//返回c继续
		if (ret!='c')
		{
			break;
		}
		//电脑下棋
		ComMove(bord1, ROW, COL);
		//打印·一遍
		Displaybord(bord1, ROW, COL);
		//判断是否是电脑赢
		IsWin(bord1, ROW, COL);
		ret = IsWin(bord1, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢");
	}
	else if (ret == '#')
	{
		printf("电脑赢");

	}
	else
	{
		printf("平局");
	}
	
	
}
void Test() 
{
	int input=0;
	srand((unsigned  int)time(NULL));
	do
	{
		display();
		printf("请输入>");
	    scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("成功退出游戏\n");
			break;
		default:
			printf("选择错误请，重新选择\n");
			break;
		}

	} while (input);



}
int main()
{
	
	Test();
	return 0;
}