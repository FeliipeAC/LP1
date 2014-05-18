/*Faça um programa que receba do usuario dois arrays, A e B, com 10 numeros inteiros
cada. Crie um novo array C calculoando C=A-B. Mostre na tela os dados do array C;*/

#include <stdio.h>
#include <stdlib.h>

int Ler_vetor1(int a[], int i){
	printf("\n\nDigite 10 numeros para o vetor 1: ");
	for (i=0; i<10; i++)
		scanf("%d",&a[i]);
	return a[i];		
}

int Ler_vetor2(int b[], int j){
	printf("Digite 10 numeros para o vetor 2: ");
	for (j=0; j<10; j++)
		scanf("%d",&b[j]);
	return b[j];
}

void Resultado(int c[], int a[], int b[], int k){
	for (k=0; k<10; k++)
		c[k]=a[k]-b[k];
	printf("\nVetor 1 menos vetor 2: ");
	for (k=0; k<10; k++)
		printf("%d ",c[k]);
}

int main ()
{
	int a[10], b[10], c[10], i, j, k;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade%c º",184);
	a[10]=Ler_vetor1(a,i);
	b[10]=Ler_vetor2(b,j);
	Resultado(c,a,b,k);
	printf("\n\n");
	system("pause");
	return 0;		

}

