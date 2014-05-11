/*Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int vetor[10], i, cont=0;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	printf("Digite dez numeros: ");
	
	for (i=0; i < 10; i++)
		{
			scanf("%d",&vetor[i]);
			if (vetor[i]%2 == 0)
				cont++;
		}
	printf("Quantidade de valores pares: %d\n",cont);
	system("pause");
	return 0;
	
}
