#include <stdio.h>
#include "ABC.h"
#define A 3
#define B 3
char arr[A][B] = { 0 };
void EFG()
{
	int I = 0;
	do
	{
		scanf("%d", &I);
		switch (I)
		{
		case 1:
			ABC(arr);
			BCD(arr);
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重试");
			break;
		}

	} while (I >= 2);
}
void game()
{
	char ret = 'c';
	int i = 0;
	CDE();
	EFG();
	while (1)
	{

		QWE(arr, A, B);
		BCD(arr);
		printf("                                                              \n");
		ret = is_win(arr, A, B);
		if (ret!='c')
		{
			break;
		}
		computer(arr, A, B);
		BCD(arr);
		ret = is_win(arr, A, B);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret=='*')
	{
		printf("玩家赢");
	}
	else if (ret=='#')
	{
		printf("电脑赢");
	}
	else if (ret=='o')
	{
		printf("平局");
	}
	
}
int main()
{	
	srand((unsigned int)time(NULL));
	game();
	return 0;
}
