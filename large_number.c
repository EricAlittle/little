#include <stdio.h>
#include <stdlib.h>

int main()
{
	static unsigned int temp[1024];/*�ֶδ�������*/
	unsigned int position=1;/*��¼���м���*/
    int overflow=0;	/*��¼����ÿһ��ʱ�Ƿ����*/
	long times=10000,tm_cnt,sgn_cnt;/*Ĭ��10000�μ���,���Ը���,����������(�˷�����,�ε�λ��)*/
	temp[0] = 2;/*��ʼֵΪ2*/
	if(times > 13000)
	{
		printf("your input is too large");/*��������Ƿ�Խ��*/
		exit(0);
	}
	/*��ʼ����,���Ϊ�˷�����,�ڲ�Ϊÿһλ����*/
	for(tm_cnt=0;tm_cnt <times-1;tm_cnt++)
	{
		for(sgn_cnt=0;sgn_cnt < position;sgn_cnt++)
		{
			temp[sgn_cnt] <<= 1;/*�൱�ڳ�2*/
			if(overflow==1)/*����ϴ��Ƿ������*/
			{
				/*�еĻ�,������ӵ���һ��,ͬʱ�����Ϊ0*/
				++temp[sgn_cnt]; 
				overflow=0;
			}
			if(temp[sgn_cnt]> 9999)
			{
				/*��鱾���Ƿ����,����Ļ�,*/
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