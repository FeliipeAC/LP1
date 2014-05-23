#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Nome(char nome[], int i){
	printf("Nome: ");
	scanf("%s",nome);
	printf("\nPrimeira 4 letras do nome: ");
	for (i=0;i<4; i++)
		printf("%c",nome[i]);
}

int main ()
{
	char nome[15];
	int i;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	Nome(nome,i);
	printf("\n\n");
	system("pause");
	return 0;
}

