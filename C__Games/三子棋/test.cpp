#include "game.h"
//extern void InitBoard(char board[ROW][COL],int row,int col);
//extern void DisplayBoard(char board[ROW][COL], int row, int col);





void menu()
{
	printf("*********************************************\n");
	printf("************** 1.play   0.exit **************\n");
	printf("*********************************************\n");
}

void game()
{
	char ret;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);          //初始化棋盘
	DisplayBoard(board, ROW, COL);       //打印棋盘
	while (1)
	{
		PlayerMove(board, ROW, COL);     //玩家下棋
		DisplayBoard(board, ROW, COL);

		ret = IsWin(board, ROW, COL);    //判断玩家是否赢
		if (ret != 'C')
		{
			break;
		}

		ComputerMove(board, ROW, COL);   //电脑下棋
		DisplayBoard(board, ROW, COL);

		ret = IsWin(board, ROW, COL);    //判断电脑是否赢
		if (ret != 'C')
		{
			break;       //如果是C就一直玩，不是C就要出结果了
		}
	}
	if (ret == 'O')
	{
		printf("\n玩家赢了！！！！\n");
	}
	else if (ret == 'X')
	{
		printf("\n电脑赢了！！！！\n");
	}
	else
	{
		printf("\n你居然和电脑平局！！\n");
	}
}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:game();break;
		case 0:printf("退出游戏\n");break;
		default:printf("选择错误，请重新选择！\n");break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}
