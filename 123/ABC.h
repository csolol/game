#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define A 3//定义棋盘横的行数
#define B 3//定义棋盘竖的行数
void ABC(char arr[A][B]);//初始化数组
void BCD(char arr[A][B]);//打印棋盘
void CDE();//打印菜单
void EFG();//选择
void QWE(char arr[A][B], int a, int b);
void computer(char arr[A][B], int a, int b);
char is_win(char arr[A][B], int a, int b);
//'*'玩家赢
//'#'电脑赢
//'o'平局
//'c'对局未完