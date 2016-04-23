#include <stdio.h>
#include <stdlib.h>
//输入一个小写字母，输出其后面的是个字母
void main()
{
	char a;
	printf("Please input a char->");
	scanf("%d",&a);
	if('a' >= 97 && 'a'<=120)
	{
		int i;
		for(i='a'+1;i<=('a'+10);i++)
		{
			printf("%c ",i);
		}
	}
	else
	{
		printf("your input is unlawful");
	}
}