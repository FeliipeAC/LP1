#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Nome(char nome[]){
	printf("Nome: ");
	scanf("%s",nome);
	return nome[15];
}

int Idade(int idade){
	printf("\nIdade: ");
	scanf("%d",&idade);
	return idade;
}

char Sexo (char sexo[]){
	printf("\nSexo: ");
	scanf("%s",sexo);
	return sexo[15];
}

void Resultado(char nome[], char sexo[], int idade){
	if ((strcmp(sexo,"feminino")== 0) && (idade<25))
	   printf("\nAceita");
	else
		printf("\nNao aceita"); 
}

int main ()
{
 	char nome[15], sexo[15];
 	int idade;
 	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	nome[15]=Nome(nome);
 	idade=Idade(idade);
 	sexo[15]=Sexo(sexo);
 	Resultado(nome,sexo,idade);
 	printf("\n\n");
 	system("pause");
 	return 0;

}

