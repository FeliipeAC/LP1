#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Ler_palavra(char palavra[], int tam){
	int i;
	printf("Escreva uma palavra: ");
	scanf("%s",palavra);
	tam=strlen(palavra);
	for (i=0; i<tam; i++)
		palavra[i]=palavra[i] + 1;
	return palavra[i];	
}

int main ()
{
	char palavra[50];
	int i,tam;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	palavra[50]=Ler_palavra(palavra,tam);
	printf("\nResultado: %s \n\n",palavra);
	system("pause");
	return 0;
}

