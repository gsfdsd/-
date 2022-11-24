//#define _CRT_SECURE_NO_WARNINGS  1
//
//
//#include  <stdio.h>
//void bubble_sort(int* arr, int zs)
//{
//	int i = 0;
//	for (i=0;i<zs-1;i++)
//	{
//		int j = 0;
//		for (j=0;j<zs-1-i;j++)
//		{
//			if (arr[j]>arr[j+1]) 
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int  main() 
//{
//	int i = 0;
//	int  arr[] = {9,8,7,6,5,4,3,2,1};
//	int zs = sizeof(arr) / sizeof(arr[0]);
//     bubble_sort(arr,zs);
//
//	 for (i = 0; i < zs; i++)
//	 {
//		 printf("%d  ",arr[i]);
//	 }
//	
//	return 0;
//}

//#include <stdio.h>
//int my_strlen(char* arr)
//{
//	if ((*arr) !="\0") {
//	 return 	1 + my_strlen(arr+1);
//	}
//	else
//	{
//		return 0;
//	}
//	
//}
////使用递归创建求字符长度函数，不能创建变量
//int main()
//{
//	char  arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//}

//#include  <stdio.h>
//#include  <string.h>
//#include <windows.h>
//#include  "add.h";
//
//int main() 
//{
//	int a = 1;
//	int b = 2;
//	int sum = 0;
//	sum = Add(a,b);//函数的调用
//	printf("%d",sum);
//	return 0;
//}
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//	again:
//	printf("电脑在一分钟后关机，请输入我是猪\n请输入：\n");
//	scanf("%s",input);
//	if (strcmp(input,"我是猪")==0)
//	{
//		system("shutdown -a");
//	}
//	else {
//		goto  again;
//	}
//
//	return 0;
//}


//void u() 
//{
//	printf("*************************************\n");
//	printf("*******  1.继续游戏  0.结束游戏******\n");
//	printf("*************************************\n");
//}
//void youxi()
//{
//	//产生一个随机数
//	int re = 0;
//	int guess = 0;
//	re = rand() % 100;
//	while (1)
//	{
//		//进行比较
//		printf("请输入猜的数字：");
//		scanf("%d", &guess);
//		if (re > guess)
//		{
//			printf("这个数字比较小\n");
//		}
//		else if (re < guess)
//		{
//			printf("这个数字比较大\n");
//
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//	
//
//}
//int  main() 
//{
//	//猜数小游戏
//	int   n = 0;
//	//rand的起步srand
//	srand((unsigned int)time(NULL));
//	do
//	{
//		u();
//		printf("请选择：");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			youxi();
//			break;
//		case 0:
//			printf("结束游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (n);
//	
//
//	return 0;
//}

//int main()
//{
//	//九九乘法表
//	for(int n=1;n<=9;n++)
//	{
//		for (int j=1;j<=n;j++) 
//		{
//			printf("%d*%d=%-2d ",n,j,n*j);
//		}
//		printf("\n");
//	
//	}
//	return 0;
//}
//int main() 
//{
//	//1-100有几个9
//	int n = 0;
//	int count = 0;
//	for (n=1;n<=100;n++)
//	{
//		if(n%10==9)
//		{
//			count++;
//		}
//		if (n/10==9)
//		{
//			count++;
//
//		}
//	}
//	printf("%d",count);
//	return 0;
//}
//int main()
//{
//	//打出1000到2000是闰年的数字
//	int year = 0;
//	int count = 0;
//	for (year=1000;year<=2000;year++)
//	{
//		if (year%4==0 && year%100!=0) 
//		{
//			printf(" %d",year);
//			count++;
//		}
//		else if (year%400==0)
//		{
//			printf("  %d", year);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//
//}
//int main()
//{//输入三个数字从大到小排列
//	int  a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf("%d%d%d",&a,&b,&c);
//	if (a<b)
//	{
//		int stemp = a;
//		a = b;
//		b = stemp;
//	}
//	if (a<c) 
//	{
//		int stemp = a;
//		a = c;
//		c = stemp;	
//	}
//	if (b<c)
//	{
//		int stemp = b;
//		b = c;
//		c = stemp;
//	}
//	printf("%d%d%d",a,b,c);
//	return 0;
//
//}

//int main() 
//{
//	//只能输入三次密码
//	int n = 0;
//	char password[20] = { 0 };
//
//	for (n=0;n<3;n++) 
//	{
//		scanf("%s", password);
//		if (strcmp(password,"123456") == 0)  //库函数
//		{
//			printf("密码正确");
//			break;
//		}
//		else 
//		{
//			printf("密码错误");
//		}
//
//	}
//	if (n==3) 
//	{
//		printf("三次密码错误");
//	}
//
//	return 0;
//
//
//}

//int  main() 
//{
//	//两头逐步向中间替换
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;//库函数
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		//休息一秒
//		Sleep(1000);
//		system("cls");//这个是系统命令函数
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//	return 0;
//
//}
//int  main()
//{
//	//找到数组里面得元素
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(0);
//	int right = sz - 1;
//
//	while (left<=right) 
//
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < a)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > a)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到下标%d", mid);
//			break;
//		}
//	}
//	if (left>right) 
//	{
//
//		printf("找不到");
//	}
//	
//	return 0;
//}
//void    test()
//{
//    static	int  q = 1;静态
//	q++;
//	printf("a=%d\n",q);
//}
//defined定义宏
//#define  max(x,y)   (x>y?x:y)
////结构体
//struct   book{
//	char name[20];
//	int price;
//};
//int main() 
//
//{
//	//for循环变种
//	int i = 0;
//	for (;i<10;i++) 
//	{
//		printf("haha");
//	
//	}
//	int x;
//	int y;
//	for ( x=0, y=0;x<2 && y<5;x++,y++){
//	
//		printf("hh");
//	
//	}


	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	////打印数组元素
	//for (int i=0;i<10;i++)
	//{
	//	printf("%d",arr[i]);
	//}

	/*int a = 0;
	scanf("%d",&a);
	switch (a) 
	{
	case  1:
		printf("1");
		break;
	case  2:
		printf("2");
		break;
	default:
		printf("请输入准确的");
	
	}*/



	
//	struct  book b = {"c语言",36};
//	
//	struct book* p =&b;
//	strcpy(b.name,"c++");//库函数
//	//b.price = 90;
//	printf("%s", p->name);
//	printf("%d", p->price);
//	printf("%s",b.name);
//	printf("%d",b.price);
//

	////指针变量
	//char a = 'w';
	//char* p = &a;
	//*p = 'a';
	//printf("%c",a);


	//typedef  unsigned   int  n;//类型定义
	//n m = 2;
	//int n = 0;
	//while (n<5) {
	//	test();
	//	n++;
	//
	//}
	//int a = 10;
	//int b = 20;
	//printf("定义宏得出的最大值：%d",MAX(a,b));
//	return  0;
//
//
//}