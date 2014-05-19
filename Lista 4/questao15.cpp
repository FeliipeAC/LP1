#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Ler_str1(char str1[]){
	printf("Escreva uma palavra: ");
	gets(str1);
	return str1[15];
}

char Ler_str2(char str2[]){
	printf("Escreva outra palavra: ");
	gets(str2);
	return str2[15];
}

char Concatena(char str1[],char str2[],char frase[], int tam1, int tam2, int tam_t){
	int i, j;
	for (i=0; i<tam1; i++){
		frase[i]=str1[i];
	}
	frase[i]=' ';
	for (j=tam1+1,i=0; j<tam_t; j++,i++)
		frase[j]=str2[i];	
	return frase[j];
}

int main ()
{
	char str1[15], str2[15], frase[31];
	int tam1, tam2, tam_t;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	str1[15]=Ler_str1(str1);
	str2[15]=Ler_str2(str2);
	tam1=strlen(str1);
	tam2=strlen(str2);
	tam_t=tam1+tam2+2;
	frase[tam_t]=Concatena(str1,str2,frase,tam1,tam2,tam_t);
	printf("\nPalavras concatenadas: ");
	puts(frase);
	printf("\n\n");
	system("pause");
	return 0;
}

