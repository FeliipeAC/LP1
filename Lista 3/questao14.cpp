#include <stdio.h>

int main ()
{
	int i=1, num, soma;
	
	printf("Digite dez numeros: ");
	scanf("%d",&num);
	soma=num;
	for (i=1; i <= 9; i++)
		{
			scanf("%d",&num);
			soma=soma + num;
		}
	printf("\nSoma dos dez numeros digitados: %d",soma);
	return 0;	
	
	
	
	
}
