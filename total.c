#include <stdio.h>
#include <stdlib.h>
//��̬�����Ǹ��Ǹ����֣������ֵ����Сֵ���ͣ�ƽ����
void main()
{
	printf("please input 10 numbers->\n");
	int i,num[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	//ð������,�õ����ֵ����Сֵ
	int x,y,temp;
	for(x=0;x<10;x++)
	{
		for(y=x;y<10;y++)
		{
			if(num[x]<num[y])
			{
				//�����ǰС���ں�
				temp=num[x];
				num[x]=num[y];
				num[y]=temp;
			}
		}
	}
	//�����ܺ�
	int sum=0,j;
	for(j=0;j<10;j++)
	{
		sum+=num[j];
	}
	//����ƽ����
	float average=sum/10.0;//���ܳ���һ�����ε����֣�����С����֮������ݶ�ʧ
	printf("max->%d\n",num[0]);
	printf("min->%d\n",num[9]);
	printf("sum->%d\n",sum);
	printf("average->%2.1f\n",average);

}