
#include  "bord.h";

void Initbord(char bord[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i=0;i<row;i++) 
	{
		for (j=0;j<col;j++)
		{
			bord[i][j] = ' ';
		}
	}
}
void Displaybord(char bord[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//打印行
	{

		int j = 0;
		for (j = 0; j < col; j++)//打印列
		{
			printf(" %c ", bord[i][j]);
			if(j<col-1)
			printf("|");
		}
		printf("\n");
		if(i<row-1)
		{ 
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
		

	}
}
void PlayMove(char bord[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标：");
		scanf("%d%d",&x,&y);
		//判断x,y合法性
		if (x>=1 && x<=row && y>=1 && y<=col)
		{
			//判断是否为空
			if (bord[x-1][y-1]==' ')
			{
				//赋值
				bord[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("改坐标被占用\n");

			}
		}
		else
		{
			printf("输入不合法，请重新输入\n");
		}
		
	}

}
void ComMove(char bord[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走：\n");
	while (1)
	{
		//取随机数
		x = rand() % row;
		y = rand() % col;
		if (bord[x][y] == ' ')
		{
			bord[x][y] = '#';
			break;
		}
	}	
}
int IsFull(char bord[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (bord[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char IsWin(char bord[ROW][COL], int row, int col)
{
	int i = 0;
	//行的每项一样
	for (i=0;i<row;i++) 
	{
		if (bord[i][0]==bord[i][1] && bord[i][1]== bord[i][2] && bord[i][1]!=' ')
		{
			return bord[i][1];
		}
	}
	//列队每项一样
	for (int j = 0; j < col; j++)
	{
		if (bord[0][j]== bord[1][j] && bord[1][j]== bord[2][j] && bord[0][j]!=' ')
		{
			return bord[0][j];
		}
	}
	//对角线
	if (bord[0][0]== bord[1][1] && bord[1][1]== bord[2][2] && bord[0][0]!=' ')
	{
		return   bord[0][0];
	}
	if (bord[0][2] == bord[1][1] && bord[1][1] == bord[2][0] && bord[1][1] != ' ')
	{
		return   bord[0][0];
	}
	//判断是否平局
	if (1 == IsFull(bord,ROW,COL))
	{
		return 'Q';
	}
	return 'c';

}