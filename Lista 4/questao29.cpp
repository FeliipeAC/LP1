#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Nome( char nome[]){
	printf("Nome: ");
	scanf("%s",nome);
	return nome[15];
}

void Qnt_letras(char nome [], int i){
	for (i=0; nome[i]!='\0'; i++);
	printf("\nO nome \"%s\" tem %d letras",nome,i);
		
}
int main ()
{
 	char nome[15];
 	int i;
 	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	nome[15]=Nome(nome);
 	Qnt_letras(nome, i);
 	printf("\n\n");
 	system("pause");
 	return 0;

}

