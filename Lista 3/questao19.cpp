#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int vetor[10], i, maior=0, pos;
	
	printf("Digite dez numeros: \n");

	for (i=0; i<=9; i++)
		{
			scanf("%d",&vetor[i]);
			if (vetor[i] > maior)
				{
					maior=vetor[i];
					pos=i;
				}
		}
	printf("\nVetor: ");
	for (i=0; i <= 9; i++)
		printf("%d | ",vetor[i]);
	printf("\nMaior numero do vetor: %d",maior);
	printf("\nPosicao do maior numero: %d\n",pos);
	system("pause");
	return 0;	
}
