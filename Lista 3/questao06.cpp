/*Faça um programa que calcule e mostre a soma dos 50 primeiros numeros pares.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i, soma;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	for (i=0; i<51; i++)
			soma=(2*i) + soma;
	printf("A soma dos 50 primeiros numeros pares eh: %d\n\n",soma-1);
	system("pause");
	return 0;		
	
	
}
