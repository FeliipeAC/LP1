/*Elabore um programa que faça a leitra de vários numeros inteiros até que se
digite um numero negativo. O programa tem que retornar o maior e o menor numero lido*/

#include <stdio.h>
#include <stdlib.h>

int Ler_numero (int num){
	printf("\nDigite um numero inteiro: ");
	scanf("%d",&num);	
	return num;
}

int Num_maior (int num, int num_maior){
	if (num >= num_maior)
		num_maior=num;
	return num_maior;	
}

int Num_menor (int num, int num_menor){
	if ((num <= num_menor) && (num > 0))
		num_menor=num;
	return num_menor;	
}

void Resultado (int num_maior, int num_menor){
	system("cls");
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	printf("Maior numero = %d \nMenor numero = %d\n\n",num_maior,num_menor);
	system("pause");	
}

int main () {
	int num=0, n_maior, n_menor;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	num=Ler_numero(num);
	n_maior = num;
	n_menor = num;
	while (num >= 0){
		num=Ler_numero(num);
		n_maior=Num_maior(num,n_maior);
		n_menor=Num_menor(num,n_menor);

	}	
	Resultado(n_maior,n_menor);

return 0;
}
