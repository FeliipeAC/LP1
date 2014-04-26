#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int vetor[10], i, j;
	
	printf("Digite dez numeros: ");
	
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
