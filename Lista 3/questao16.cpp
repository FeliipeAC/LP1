/*Fa�a um programa que some os termos de valor par da sequencia de Fibonacci,
cujos valores n�o ultrapasse quatro milhoes.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i, a=0, b=1, aux=0, soma;
	
	printf("\t\t\t\t\t\t�Por: Felipe Andrade %c�\n\n",184);
	for (i=0; aux<4000000; i++)
	{
		aux=a+b;
		a=b;
		b=aux;
		if (aux%2 == 0)
			soma+=aux;
		
	}
	printf("Soma dos termos pares da Sequencia de Fibonacci: %d\n\n",soma);
	system("pause");
	return 0;
	
}
