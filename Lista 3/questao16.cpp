/*Faça um programa que some os termos de valor par da sequencia de Fibonacci,
cujos valores não ultrapasse quatro milhoes.*/

#include <stdio.h>
#include <stdlib.h>

void Soma_par_fib(){
	int i, a=0, b=1, aux=0, soma;
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
	return;	
}

int main ()
{	
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	Soma_par_fib();
}
