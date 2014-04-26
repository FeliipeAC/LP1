#include <stdio.h>

int main () 
{
	int i, j=1,k=1;
	
	for (i=1;i <= 100;i++)
		printf("\t%d",i);
	printf("\n");
	while (j <= 100)
		{
			printf("\t%d",j);
			j++;
		}
	printf("\n");
	do
	{
		printf("\t%d",k);
		k++;
		
		
	} while(k<=100);
}
