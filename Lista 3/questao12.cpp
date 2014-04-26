#include <stdio.h>

int main ()
{
	int i, num;
	
	printf("Digite um numero positivo: ");
	scanf("%d",&num);
	printf("Divisores: ");
	for (i=1; i <= num; i++)
	{
		if ((num%i) == 0)
			printf("%d ",i);
	}
	getchar();
	return 0;
}
