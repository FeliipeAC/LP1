/*Elabore um programa que faça a leitra de vários numeros inteiros até que se
digite um numero negativo. O programa tem que retornar o maior e o menor numero lido*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	int num=0, n_maior, n_menor;
	n_maior = num;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	while (num >= 0){
		printf("Digite um numero inteiro: ");
		scanf("%d",&num);
		if (num >= n_maior)
			n_maior=num;
		if((num < n_menor) && (num > 0)) 
			n_menor=num;	
	}
	printf("Maior numero = %d \nMenor numero = %d\n\n",n_maior,n_menor);
	system("pause");
return 0;
}

