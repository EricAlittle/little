#include <stdio.h>

void main()
{
	int count=0;//定义数据量
	printf("Please inpunt the number of dgits->");
	scanf("%d",&count);//获取数据量
	printf("\nPlease input %d numbers->",count);
	int i,n,num=0,a[count];
	for(i=0;i<count;i++)
	{
		scanf("%d",&a[i]);//录入数据
	}
	for(n=0;n<count;n++)
	{
		if(num<a[n])//挑选满足条件的数据并更新都num变量
			num=a[n];
	}
	printf("The max number->%d",num);
}