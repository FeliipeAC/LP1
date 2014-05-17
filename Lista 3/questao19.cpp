/*Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor.
Imprima o vetor o maior elemento e a posição que ele se encontra.*/

#include <stdio.h>
#include <stdlib.h>

void Calc_maior_elem (){
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
	printf("\n\nMaior numero do vetor: %d",maior);
	printf("\nPosicao do maior numero: %d\n\n",pos);
	system("pause");
	return;	
}

int main ()
{
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	Calc_maior_elem();
}
