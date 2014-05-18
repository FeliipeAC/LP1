#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Ler_string (char string[]){
	printf("Entre com uma string: ");
	gets(string);
	return string[30];	
}

void Resultado (int tam){
	printf("Tamanho da string = %d\n\n",tam);
}
int main ()
{
	char string[30];
	int tam;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade%c º\n",184);
	string[30]=Ler_string(string);
	tam=strlen(string);
	Resultado(tam);
	system("pause");
}

