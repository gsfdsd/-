
#include "bord.h";

void display() 
{
	printf("**************************\n");
	printf("****  1.��Ϸ  0.�˳�  ****\n");
	printf("**************************\n");

}
void game()
{
	char ret = 0;
	char bord1[ROW][COL] = {0};
	Initbord(bord1,ROW,COL);//���г�ʼ��
	Displaybord(bord1, ROW, COL);//���д�ӡ
	printf("�������>\n");
	while (1)
	{
		//�������
		PlayMove(bord1, ROW, COL);
		//��ӡ��һ��
		Displaybord(bord1, ROW, COL);
		//�ж��Ƿ������Ӯ
		ret=IsWin(bord1, ROW, COL);
		//����*���Ӯ
		//����#����Ӯ
		//����Qƽ��
		//����c����
		if (ret!='c')
		{
			break;
		}
		//��������
		ComMove(bord1, ROW, COL);
		//��ӡ��һ��
		Displaybord(bord1, ROW, COL);
		//�ж��Ƿ��ǵ���Ӯ
		IsWin(bord1, ROW, COL);
		ret = IsWin(bord1, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ");
	}
	else if (ret == '#')
	{
		printf("����Ӯ");

	}
	else
	{
		printf("ƽ��");
	}
	
	
}
void Test() 
{
	int input=0;
	srand((unsigned  int)time(NULL));
	do
	{
		display();
		printf("������>");
	    scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�ɹ��˳���Ϸ\n");
			break;
		default:
			printf("ѡ������룬����ѡ��\n");
			break;
		}

	} while (input);



}
int main()
{
	
	Test();
	return 0;
}