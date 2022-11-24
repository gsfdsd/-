
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
	for (i = 0; i < row; i++)//��ӡ��
	{

		int j = 0;
		for (j = 0; j < col; j++)//��ӡ��
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
		printf("���������꣺");
		scanf("%d%d",&x,&y);
		//�ж�x,y�Ϸ���
		if (x>=1 && x<=row && y>=1 && y<=col)
		{
			//�ж��Ƿ�Ϊ��
			if (bord[x-1][y-1]==' ')
			{
				//��ֵ
				bord[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");

			}
		}
		else
		{
			printf("���벻�Ϸ�������������\n");
		}
		
	}

}
void ComMove(char bord[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����ߣ�\n");
	while (1)
	{
		//ȡ�����
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
	//�е�ÿ��һ��
	for (i=0;i<row;i++) 
	{
		if (bord[i][0]==bord[i][1] && bord[i][1]== bord[i][2] && bord[i][1]!=' ')
		{
			return bord[i][1];
		}
	}
	//�ж�ÿ��һ��
	for (int j = 0; j < col; j++)
	{
		if (bord[0][j]== bord[1][j] && bord[1][j]== bord[2][j] && bord[0][j]!=' ')
		{
			return bord[0][j];
		}
	}
	//�Խ���
	if (bord[0][0]== bord[1][1] && bord[1][1]== bord[2][2] && bord[0][0]!=' ')
	{
		return   bord[0][0];
	}
	if (bord[0][2] == bord[1][1] && bord[1][1] == bord[2][0] && bord[1][1] != ' ')
	{
		return   bord[0][0];
	}
	//�ж��Ƿ�ƽ��
	if (1 == IsFull(bord,ROW,COL))
	{
		return 'Q';
	}
	return 'c';

}