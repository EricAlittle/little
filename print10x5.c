#include <stdio.h>
#include <stdlib.h>

void main()
{
	int row,col,num[10][5];
	for(row = 0;row < 10;row++)
	{
		for(col = 0;col < 5;col++)
		{
			num[row][col] = (row + 1) * (col + 1);
		}
	}
	int i,j;
	for(i = 0;i < 10;i++)
	{
		for(j = 0;j < 5;j++)
		{
			if((j+1)%5 == 0)
			{
				printf("%d  ",num[i][j]);
				printf("\n");
			}
			else
				printf("%d  ",num[i][j]);
		}
	}
}