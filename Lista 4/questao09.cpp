#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Ler_string (char string[]){
	printf("Entre com uma string: ");
	gets(string);
	return string[30];
}

void Maiuscula (char string[], int tam){
	int i;
	for (i=0; i<tam; i++){
		if ((string[i]>='a') && (string[i]<='z'))
			string[i]= string[i] - 32;
	}
	printf("\nString com caracteres maiusculos: ");
	for (i=0; i<tam; i++)
		printf("%c",string[i]);
}

int main ()
{
	char string[30];
	int tam;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade%c º\n",184);
	string[30]=Ler_string(string);
	tam=strlen(string);
	Maiuscula(string,tam);
	printf("\n\n");
	system("pause");
	return 0;
}


