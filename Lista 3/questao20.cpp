/*Escreva um programa que leia n numeros inteiros no intervalo [0,50] e os
armazene em um vetor estaticamente alocado com 100 posições. Preencha um
segundo vetor, também alocado estaticamente, apenas com os impares do primeiro
vetor. Imprima os dois vetores, 10 elementos por linha.*/

#include <stdio.h>
#include <stdlib.h>

int Ler_vetor (int vetor[], int x){
	int num,i;
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
	printf("Vetor: \n");
	for (i=0; i<x; i++)
		printf("%d\t",vetor[i]);
	return vetor[i];
}

int Vetor_impar(int vetor_impar[], int vetor[], int x, int y){
	int j,k;
	for (j=0; j <= x; j++)
		{
			if (vetor[j]%2 == 1)
				{
					vetor_impar[y]=vetor[j];
					y++;
				}
		}	
	printf("\nVetor impar: \n");
	for (k=0; k < y; k++)
		printf("%d\t",vetor_impar[k]);	
	return vetor_impar[y];
}
int main ()
{
	int vetor[100], vetor_impar[100], i , j, x=0, y=0, num;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	vetor[100]=Ler_vetor(vetor,x);
	
	vetor_impar[100]=Vetor_impar(vetor_impar,vetor,x,y);
	system("\npause");
	return 0;	

}
