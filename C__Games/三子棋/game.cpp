#include "game.h"
#include<stdio.h>

void InitBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
board[i][j] = ' ';
		}
	}
}

//             |   |
//          ---|---|---
//             |   |
//          ---|---|---
//             |   |


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	printf("\n");
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			printf(" %c ", board[i][j]);      //打印  三个空格
			if (j < col - 1)
			{
				printf("|");                  //打印     |         →       |   |   |  |
			}
		}
		printf("\n");                         //打印分割行
		if (i < row - 1)
		{
			for (int j = 0;j < col;j++)        //分列     
			{
				printf("---");                //打印    ---
				if (j < col - 1)
				{
					printf("|");              //打印     |         →    ---|---|---|---|---
				}
			}
			printf("\n");
		}
	}
}



void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("\n玩家走:>\n");
	while (1)
	{
		printf("请输入两个数字代替所下位置坐标（空格分开）:>");
		scanf_s("%d%d", &x,&y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'O';
				break;
			}
			else
			{
				printf("\n该坐标被占用\n");
			}
		}
		else
		{
			printf("\n坐标非法，请重新输入！\n");
		}
	}
}




void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("\n电脑走:>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'X';
			break;
		}
	}
}



int IsFull(char board[ROW][COL], int row, int col)
{
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;  //没满
			}
		}
	}
	return 1;  //棋盘满了
}





char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0;i < row;i++)   //横三行
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0;i < col;i++)   //竖三行
	{
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
        }
	}
	int flag1;
	for (i = 0;i < row - 1;i++)  //主对角线
	{
		if (board[i][i] != board[i + 1][i + 1] || board[i+1][i+1] == ' ')
		{
			flag1 = 0;
			break;
		}
		else
		{
			flag1 = 1;
		}
	}
	if (flag1 == 1)
	{
		return board[i][i];
	}
	int flag2;
	for (i = 0;i < row - 1;i++)  //副对角线
	{
		if (board[i][row - i - 1] != board[i + 1][row - i - 2] || board[i][row-i-1] == ' ')
		{
			flag2 = 0;
			break;
		}
		else
		{
			flag2 = 1;
		}
	}
	if (flag2 == 1)
	{
		return board[i][row-i-1];
	}
	if (IsFull(board, ROW, COL) == 1)
	{
		return 'Q';  //满了就平局
	}
	else
	{
		return 'C';  //
	}
}
