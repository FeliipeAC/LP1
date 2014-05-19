#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Ler_palavra(char palavra[]){
	printf("Escreva uma palavra: ");
	gets(palavra);
	return palavra[30];
}

char Ler_letra(char letra){
	printf("Escreva uma letra: ");
	scanf("%c",&letra);
	return letra;
}

char Copia (char palavra[], char letra, char palavra_copia[], int tam, int i){
	int j=0;
	for (i=0; i<=tam; i++){
		if (palavra[i] != letra){
			palavra_copia[j]=palavra[i];
			j++;
		}
	}
	return palavra_copia[j];
}

int main ()
{
	char palavra[30], palavra_copia[30];
	char letra;
	int tam, i;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	palavra[30]=Ler_palavra(palavra);
	letra=Ler_letra(letra);
	tam=strlen(palavra);
	palavra_copia[30]=Copia(palavra,letra,palavra_copia,tam,i);
	printf("\nPalavra: ");
	puts(palavra);
	printf("\nPalavra sem a letra \"%c\" : ",letra);
	puts(palavra_copia);
	printf("\n\n");
	system("pause");
	return 0;
}

