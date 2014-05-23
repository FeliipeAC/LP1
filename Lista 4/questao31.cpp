#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Nome( char nome[]){
	printf("Nome: ");
	scanf("%s",nome);
	return nome[15];
}

void Inversa (char nome[], char inversa[], int tam){
	int j, i=1;
	for (j=0; j<=tam;j++){
		inversa[j]=nome[tam-i];
		i++;
	}
	printf("\nNome de tras pra frente: %s",inversa);
}

int main ()
{
 	char nome[15], inversa[15];
	int tam;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	nome[15]=Nome(nome);
	tam=strlen(nome);
	Inversa(nome,inversa,tam);
	printf("\n\n");
	system("pause");
	return 0;
}

