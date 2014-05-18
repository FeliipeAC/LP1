/*Faça um programa que leia um vetor de cinco posiões para numeros reais
e depois um codigo inteiro. Se o codigo for zero, finalize o programa
se for 1, mostre o vetor na forma direta, se for 2, mostre o vetor na 
forma inversa. Caso o código for diferente de 1 e 2, escreva uma mensagem
falando que o codigo é inválido.*/

#include <stdio.h>
#include <stdlib.h>

float Ler_vetor(float vetor [], int i){
	printf("\n\nDigite 5 numeros: ");
	for (i=0; i<5; i++)
		scanf("%f",&vetor[i]);
	return vetor[i];	
}

void Resultado (float vetor[],int cod, int i){
	printf("\nDigite um codigo: ");
	scanf("%d",&cod);
	if (cod == 1){
		printf("\nVetor na ordem direta: ");
		for (i=0; i<5; i++)
			printf("%.2f ",vetor[i]);
		}
	if (cod == 2){
		printf("\nVetor na ordem inversa: ");
		for (i=4; i>=0; i--)
			printf("%.2f ",vetor[i]);		
		}
	if (cod > 3)
		printf("\nValor invalido!\n");
}

int main (){
	
	float vetor[5];
	int cod, i;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %c º",184);
	vetor[5]=Ler_vetor(vetor,i);
	Resultado(vetor,cod,i);
	printf("\n\n");				
	system("pause");
	return 0;	
			
}
