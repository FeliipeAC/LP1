/* Leia um vetor de 10 posi��es e atribua valor 0 para todos os elementos que
possu�rem valores negativos*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int vetor[10], i, j;
	printf("\t\t\t\t\t\t�Por: Felipe Andrade%c �",184);
	printf("\n\nDigite dez numeros: ");
	
	for (i=0; i < 10; i++)
		{
			scanf("%d",&vetor[i]);
			if (vetor[i]< 0)
				vetor[i]=0;
		}
	printf("\nResultado: ");
	for (j=0;j < 10; j++)
		printf(" %d",vetor[j]);
	
	printf("\n");
	system("pause");
	return 0;
	
}
