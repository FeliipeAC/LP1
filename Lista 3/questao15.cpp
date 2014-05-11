/*Faça um programa que some todos os números naturais abaixo de 1000 que
são múltiplos de 3 ou 5.*/

#include <Stdio.h>
#include <stdlib.h>

int main () 
{
	int soma=0, i;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	for (i=0; i < 10; i++)
	{
		if ((i%3 == 0) | (i%5 == 0))
			soma+=i;
	}
	printf("Soma: %d\n\n",soma);
	system("pause");
	return 0;
	
}
