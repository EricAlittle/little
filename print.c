#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//¼ÆËã1+22+333+4444¡­¡­
void main()
{
	long n,i,sum = 0;
	printf("please input a number->");
	scanf("%d",&n);
	
	for(i = 1;i <= n;i++)
	{
		sum += (i*((pow(10,i)-1)/9));
	}
	long test;
	test=1+22+333+4444;
	printf("the result of calculation->%d\n%d",sum,test);
}