#include <stdio.h>

void main()
{
	int count=0;//����������
	printf("Please inpunt the number of dgits->");
	scanf("%d",&count);//��ȡ������
	printf("\nPlease input %d numbers->",count);
	int i,n,num=0,a[count];
	for(i=0;i<count;i++)
	{
		scanf("%d",&a[i]);//¼������
	}
	for(n=0;n<count;n++)
	{
		if(num<a[n])//��ѡ�������������ݲ����¶�num����
			num=a[n];
	}
	printf("The max number->%d",num);
}