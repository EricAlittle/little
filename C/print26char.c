#include <stdio.h>
#include <stdlib.h>
//´òÓ¡26¸ö×ÖÄ¸»úÆ÷ASCIIÂë
void main()
{
	int i;
	for(i=65;i<=90;i++)
	{
		printf("%c %d ",i,i);
		printf("%c %d ",i+32,i+32);
		printf("\n");
	}
}