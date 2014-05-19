#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Imprimir(char string[]){
	printf("Digite uma string: ");
	gets(string);
	printf("\n\nNa tela: ");
	puts(string);
}

int main ()
{
	char string[20];
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	Imprimir(string);
	printf("\n\n");
	system("pause");
	return 0;
}

