#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Nome(char nome[]){
	printf("Nome: ");
	gets(nome);
	return nome[20];
}

char Sexo(char sexo){
	printf("\nSexo (M/F): ");
	scanf("%c",&sexo);
	if ((sexo != 'M' ) && (sexo != 'F')){
		printf("\nSexo invalido");
		exit(1);
	}	
	return sexo;	
}

char Nacionalidade (char nacionalidade[], char b[], char e[], char sexo){
	int tam;
	printf("\nNacionalidade (brasileira/estrangeira) :");
	scanf("%s",nacionalidade);
	if ((strcmp(nacionalidade,b) != 0) && (strcmp(nacionalidade,e) != 0)){
		printf("\nNacionalidade invalida");
		exit(1);
	}
	tam=strlen(nacionalidade);
	if (sexo == 'M')
		nacionalidade[tam-1]='o';	
	return nacionalidade[20];
}

int Idade(int idade){
	printf("\nIdade: ");
	scanf("%d",&idade);
	if (idade >150){
		printf("\nIdade invalida");
		exit(1);
	}	
	return idade;	
}

void Resultado(char nome[], char sexo, char nacionalidade[], int idade, char b[], char e[]){

	if (idade > 17){
		if (sexo == 'M')
			printf("\n%s, %s do sexo masculino e maior de idade, esta \nhabilitada a dirigir",nome,nacionalidade);
		if (sexo == 'F')
			printf("\n%s, %s do sexo feminino e maior de idade, esta \nhabilitada a dirigir",nome,nacionalidade);	
	}
	else{
		if (sexo == 'M')
			printf("\n%s, %s do sexo masculino e menor de idade, nao \nesta habilitada a dirigir",nome,nacionalidade);
		if (sexo == 'F')
			printf("\n%s, %s do sexo feminino e menor de idade, nao \nesta habilitada a dirigir",nome,nacionalidade);	
	}
}

int main (){
	char b[20]="brasileira",e[20]="estrangeira";
	char nome[20], sexo, nacionalidade[20];
	int idade;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade%c º\n",184);
	nome[20]=Nome(nome);
	sexo=Sexo(sexo);
	nacionalidade[20]=Nacionalidade(nacionalidade,b,e,sexo);
	idade=Idade(idade);
	Resultado(nome,sexo,nacionalidade,idade,b,e);
	printf("\n\n");
	system("pause");
	return 0;
}
