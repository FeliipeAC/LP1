/*Usando o while, escreva um programa que substitui as ocorrências de um
caractere 0 em uma string por outro caractere 1.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char Ler_string (char nome[]){
	printf("Digite os numeros: ");
	scanf("%s", nome);
	return nome[20];
}

void Resultado (char nome[]){
	printf("\nComo ficou: %s\n\n",nome);
	system("pause");
	return ;	
}
	
int main ()
{
	char nome[20];
	int i=0, tam;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	nome[20]=Ler_string(nome);
	tam=strlen(nome);
	while (i <= tam)
	{
		if (nome[i] == '0')
			nome[i]='1';
		i++;	
	}
	Resultado(nome);

	
	
}
