#include <stdio.h>

int main ()
{
	int i, a=0, b=1, aux=0, soma;
	
	
	for (i=0; aux<4000000; i++)
	{
		aux=a+b;
		a=b;
		b=aux;
		if (aux%2 == 0)
			soma+=aux;
		
	}
	printf("Soma dos termos pares da Sequencia de Fibonacci: %d",soma);
	return 0;
	
	
}
