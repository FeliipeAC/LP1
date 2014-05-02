#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main () 
{
	int i, j=1,k=1;
	
	for (i=1;i <= 100;i++)
		{
			
			printf("%d\t",i);
			usleep( 100000);
		}
	printf("\n");
	while (j <= 100)
		{
			printf("%d\t",j);
			j++;
			usleep( 100000);
		}
	printf("\n");
	do
	{
		printf("%d\t",k);
		k++;
		usleep( 100000);
		
	} while(k<=100);
	system("pause");
	return 0;
}
