#include <stdio.h>
#include <stdlib.h>

int main()
{
	static unsigned int temp[1024];/*分段储存数据*/
	unsigned int position=1;/*记录共有几段*/
    int overflow=0;	/*记录在算每一段时是否溢出*/
	long times=10000,tm_cnt,sgn_cnt;/*默认10000次计算,可以更改,两个计数器(乘方次数,段的位置)*/
	temp[0] = 2;/*初始值为2*/
	if(times > 13000)
	{
		printf("your input is too large");/*检查输入是否越界*/
		exit(0);
	}
	/*开始计算,外层为乘方次数,内层为每一位计算*/
	for(tm_cnt=0;tm_cnt <times-1;tm_cnt++)
	{
		for(sgn_cnt=0;sgn_cnt < position;sgn_cnt++)
		{
			temp[sgn_cnt] <<= 1;/*相当于乘2*/
			if(overflow==1)/*检查上次是否有溢出*/
			{
				/*有的话,将溢出加到这一段,同时置溢出为0*/
				++temp[sgn_cnt]; 
				overflow=0;
			}
			if(temp[sgn_cnt]> 9999)
			{
				/*检查本次是否溢出,溢出的话,*/
				temp[sgn_cnt]-=10000;
				overflow=1;
			}                 
		}
		if(overflow==1)
		{
			++position;
			++temp[sgn_cnt];
			overflow=0;
		}
		if(position> 1023)
		{
			printf("times:   %d   error!",tm_cnt);
			exit(1);
		}
	}
	printf( "%d   ",temp[sgn_cnt-1]);
	for(sgn_cnt=position-2;sgn_cnt >= 0;sgn_cnt--)
	{
		if(temp[sgn_cnt] < 1000)
			printf("0 ");
		if(temp[sgn_cnt] < 100)
			printf("0 ");
		if(temp[sgn_cnt] < 10)
			printf("0 ");
		printf("%d ",temp[sgn_cnt]);
		if((sgn_cnt+1)%15==0)
			printf( "\n ");
	}
	return 0;
}