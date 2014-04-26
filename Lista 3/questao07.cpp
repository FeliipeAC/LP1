#include <stdio.h>

int main ()
{
	int num;
	
	printf("Digite um numero maior que 1: ");
	scanf("%d",&num);
	if (num == 2)
		printf("Eh um numero primo");
	if (num != 2)
	{
		if (num%2 == 0)
			printf("Nao eh numero primo");
		if (num%2 ==1)
			printf("Eh numero primo");
			
	}	
	return 0;
	
}
