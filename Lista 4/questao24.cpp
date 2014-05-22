#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Resultado(char nome[], int idade, int id_menor, int id_maior, char nome_maior[], char nome_menor[]){

	printf("Idade: ");
	scanf("%d",&idade);
	id_maior=id_menor=idade;
	while (idade > 0){
		printf("\nPrimeiro nome: ");
		scanf("%s",nome);
		if (idade >= id_maior){
			id_maior=idade;
			strcpy(nome_maior,nome);
		}
		if (idade <= id_menor){
			id_menor=idade;
			strcpy(nome_menor,nome);
		}
		printf("\nIdade: ");
		scanf("%d",&idade);
	}
	printf("\nMais novo: \n- Idade: %d\n- Nome: %s",id_menor,nome_menor);
	printf("\n\nMais velho: \n- Idade: %d\n- Nome: %s",id_maior,nome_maior);
}


int main ()
{
	int idade, id_maior, id_menor;
	char nome[15], nome_maior[15], nome_menor[15];
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	Resultado(nome,idade,id_maior,id_menor,nome_maior,nome_menor);
	printf("\n\n");
	system("pause");
	return 0;
}

