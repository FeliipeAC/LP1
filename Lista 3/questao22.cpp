/* Leia um vetor de 10 posi��es e atribua valor 0 para todos os elementos que
possu�rem valores negativos*/

#include <stdio.h>
#include <stdlib.h>

void Substituir(){
	int vetor[10], i, j;	
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
	
	printf("\n\n");
	
}

int main ()
{
	printf("\t\t\t\t\t\t�Por: Felipe Andrade%c �",184);
	Substituir();
	system("pause");
	return 0;
	
}
