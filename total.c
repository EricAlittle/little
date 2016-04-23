#include <stdio.h>
#include <stdlib.h>
//动态输入是个是个数字，求最大值，最小值，和，平均数
void main()
{
	printf("please input 10 numbers->\n");
	int i,num[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	//冒泡排序,得到最大值和最小值
	int x,y,temp;
	for(x=0;x<10;x++)
	{
		for(y=x;y<10;y++)
		{
			if(num[x]<num[y])
			{
				//大的在前小的在后
				temp=num[x];
				num[x]=num[y];
				num[y]=temp;
			}
		}
	}
	//计算总和
	int sum=0,j;
	for(j=0;j<10;j++)
	{
		sum+=num[j];
	}
	//计算平均数
	float average=sum/10.0;//不能除于一个整形的数字，否则小数点之后的数据丢失
	printf("max->%d\n",num[0]);
	printf("min->%d\n",num[9]);
	printf("sum->%d\n",sum);
	printf("average->%2.1f\n",average);

}