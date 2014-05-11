/*Escreva um programa que leia n numeros inteiros no intervalo [0,50] e os
armazene em um vetor estaticamente alocado com 100 posições. Preencha um
segundo vetor, também alocado estaticamente, apenas com os impares do primeiro
vetor. Imprima os dois vetores, 10 elementos por linha.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int vetor[100], vetor_impar[100], i , j, x=0, y, num;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
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
	for (i=0; i<=x; i++)
		printf("%d\t",vetor[i]);
	
	printf("\nVetor impar: \n");
	for (j=0; j < y; j++)
		printf("%d\t",vetor_impar[j]);
		
	system("\npause");
	return 0;	

}
