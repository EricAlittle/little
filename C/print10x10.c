#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i,j,a[101];//定义数组以及循环下标变量
	for(i = 0;i < 101;i++)
	{
		a[i]=i;//数组赋值
	}
	for(j=1;j<101;j++)
	{
		if(j%10!=0)
			printf("%d ",a[j]);
		else
		{
			int sum=0,k;
			for(k=j-10;k<=j;k++)//计算每一行的总和
				sum+=k;
			printf("%d ",a[j]);//碰到10的数也需要打印出来
			printf(" ->  %d",sum);
			printf("\n");
		}
	}
}