#include <stdio.h>
#include <stdlib.h>
//��ӡ��һ��������ǰһ�����ֵ�2��
void main()
{
	int i,num[25];
	num[0]=1;
	for(i=0;i<25;i++)
	{
		num[i+1]=num[i]*2;
	}
	int j;
	for(j=0;j<25;j++)
	{
		if((j+1)%5==0)
		{
			printf("%d ",num[j]);
			printf("\n");
		}
		else
			printf("%d ",num[j]);
	}
}