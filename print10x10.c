#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i,j,a[101];//���������Լ�ѭ���±����
	for(i = 0;i < 101;i++)
	{
		a[i]=i;//���鸳ֵ
	}
	for(j=1;j<101;j++)
	{
		if(j%10!=0)
			printf("%d ",a[j]);
		else
		{
			int sum=0,k;
			for(k=j-10;k<=j;k++)//����ÿһ�е��ܺ�
				sum+=k;
			printf("%d ",a[j]);//����10����Ҳ��Ҫ��ӡ����
			printf(" ->  %d",sum);
			printf("\n");
		}
	}
}