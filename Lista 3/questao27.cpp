//Fa�a um programa que leia um vetor de cinco posi�es para numeros reais
//e depois um codigo inteiro. Se o codigo for zero, finalize o programa
//se for 1, mostre o vetor na forma direta, se for 2, mostre o vetor na 
//forma inversa. Caso o c�digo for diferente de 1 e 2, escreva uma mensagem
//falando que o codigo � inv�lido.

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float vetor[5];
	int cod, i;
	printf("Digite 5 numeros: ");
	for (i=0; i<5; i++)
		scanf("%f",&vetor[i]);
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
		printf("\nValor invalido\n");
	printf("\n\n\n\n\t\t\t\t\t�Por: Felipe Andrade%c�",184);
	printf("\n\n");				
	system("pause");
	return 0;	
			
}
