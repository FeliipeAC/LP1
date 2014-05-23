#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Nome( char nome[]){
	printf("Nome: ");
	scanf("%s",nome);
	return nome[15];
}

void Imprimir(char nome []){
	if ((nome[0] == 'a') || (nome[0] == 'A'))
	   printf("\nNome: %s",nome);
		
}
int main ()
{
 	char nome[15];
 	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	nome[15]=Nome(nome);
 	Imprimir(nome);
 	printf("\n\n");
 	system("pause");
 	return 0;

}

