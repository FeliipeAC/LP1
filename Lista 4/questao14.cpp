#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Ler_palavra(char palavra[]){
	printf("Escreva uma palavra: ");
	gets(palavra);
	return palavra[30];	
}

int Palindromo (char palavra[],char palavra_inv[], int tam){
	int i, j, cont=0;
	for (i=0; i<tam; i++){
		if (palavra[i] == palavra_inv[i])
			cont++;
	}
	if (cont == tam)
		return 1;
	else
		return 0;	
} 

char Inversa (char palavra[], char palavra_inv[], int tam){
	int j, i=1;
	for (j=0; j<=tam;j++){
		palavra_inv[j]=palavra[tam-i];
		i++;
	}
	return palavra_inv[tam];
}

int main ()
{
	char palavra[15], palavra_inv[15];
	int tam,tam_se, i;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	palavra[30]=Ler_palavra(palavra);
	tam=strlen(palavra);
	palavra_inv[30]=Inversa(palavra,palavra_inv,tam);
	printf("\nPalavra: ");
	puts(palavra);
	printf("\nPalavra invertida: ");
	puts(palavra_inv);
	if (Palindromo(palavra,palavra_inv,tam)==0)
		printf("\nNao eh palindromo\n\n");
	else 
		printf("\nEh palindromo\n\n");	
	system("pause");
	return 0;
}

