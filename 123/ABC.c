#include "ABC.h"
void ABC(char arr[A][B])
{
	int i = 0;
	for  (int i = 0; i < B; i++)
	{
	int j = 0;
	for  ( int j= 0; j < A; j++)
	{
		arr[i][j] = ' ';
	}


	}
}
void BCD(char arr[A][B])
{
	int i = 0;
	for (int  i = 0; i < B; i++)
	{
		int j = 0;
		for (int  j = 0; j < A; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j<A-1)
			{
				printf("|");

			}
		}printf("\n");
		if (i<B-1)
		{


			for (j = 0; j < A; j++)
			{
				printf("---");


				if (j < A - 1)
				{

					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void CDE()
{
	printf("*******************\n");
	printf("*****开始，请选择*****\n");
	printf("******1.play 0.exit******\n");
}
void QWE(char arr[A][B], int a, int b)
{
	int x = 0;
	int y = 0;
	while (1)
	{


		printf("玩家走：>\n");
		printf("请输入要下的坐标：>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= a&&y>=1&&y<=b)
		{
			if (arr[x-1][y-1]==' ')
			{
				arr[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("输入错误，请重试");
			}
		}
		else
		{
			printf("输入错误，请重试");

		}
	}
}
void computer(char arr[A][B], int a, int b)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % a;
		y = rand() % b;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
		
		
	}
}
char is_win(char arr[A][B], int a, int b)
{
	int i = 0;
	int j = 0;
	for (int i = 0; i < a; i++)
	{
		if (arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2]&&arr[i][0]!=' ')
		{
			return arr[i][0];
		}
		if (arr[0][i]==arr[1][i]&&arr[1][i]==arr[2][i]&&arr[0][i]!=' ')
		{
			return arr[0][i];
		}
		if (arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2]&&arr[0][0]!=" ")
		{
			return arr[0][0];
		}
	}
	return 'c';
}