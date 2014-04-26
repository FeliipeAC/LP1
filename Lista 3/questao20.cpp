#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int vetor[100], vetor_impar[100], i , j, x=0, y, num;
	
	printf("Digite numeros no invertavalo 0 a 50 (-1 para parar): ");
	while (num != -1)
	{
		scanf("%d",&num);
		if (num >= 0)
		{
			vetor[x]=num;
			x++;
		}
	}
	for (j=0; j <= x; j++)
		{
			if (vetor[j]%2 == 1)
				{
					vetor_impar[y]=vetor[j];
					y++;
				}
		}
	printf("Vetor: \n");
	for (i=1; i<=x; i++)
		printf("\t%d",vetor[i]);
	
	printf("\nVetor impar: \n");
	for (j=0; j < y; j++)
		printf("\t%d",vetor_impar[j]);
		
	system("\npause");
	return 0;	

}
