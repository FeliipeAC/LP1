/*Usando o comando for, faça um algoritmo que conte o número de 1's que
aparecem em uma string.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char Ler_string (char nome[]){
	printf("Digite os numeros: ");
	scanf("%s", nome);
	return nome[20];
}

void Resultado (char nome[], int tam){
	int i, cont=0;
	for (i=0; i <= tam ; i++)
	{
		if (nome[i] == '1')
			cont++;
	}
	printf("\nO numero de 1s na string eh: %d\n\n",cont);
	system("pause");
	return;	
}

int main ()
{
	char nome[20];
	int tam;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	nome[20]=Ler_string(nome);
	tam=strlen(nome);
	Resultado(nome,tam);
	
}
