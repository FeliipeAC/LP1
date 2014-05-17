/*Faça um programa que calcule o menor numero divisivel por cada um dos numeros
de 1 a 20. Ex: 2520 é o menor numero que pode ser dividido por cada um dos numeros
de 1 a 10, sem sombrar resto;*/

#include <stdio.h>
#include <stdlib.h>

void Menor_num_div(){
	long int i, j, num=1, cont=0;
	printf("Calculando o menor numero divisivel por cada um dos numeros de 1 a 20\n\nAguarde...");
	while (cont != 20)
	{
		++num;
		cont=0;
		for (i=1; i <= 20; i++)
		{
			if (num%i == 0)
				cont++;
				
		}
	
	}
	printf("\nResultado = %d\n\n",num);
	system("pause");
	return;
}

int main ()
{
 	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	Menor_num_div();	
}
