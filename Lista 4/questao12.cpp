#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Inserir_aluno(char tabela[][30], int i, int j ){
	int op=1;
	do {
		system("cls");
		printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
		printf("\nNome do aluno: ");
		scanf("\n%[^\n]",tabela[i]);
		i++;
		printf("\nInserir outro aluno ? (1 - Sim/ 2 - N) ");
		scanf("%d",&op);
		if (i==40)
			printf("Ja foram cadastrados 40 alunos");	
	}while((op != 2) && (i < 40));
	return tabela[i][30];
}

void Pesquisa(char tabela[][30], int i, char* pesq,char nome[]){
	
	system("cls");
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	printf("\nNome para procurar: ");
	scanf("%s",nome);
	printf("\nIndice\t|\tNome\n");
	for (i=0;i<30;i++){
		pesq = strstr( strupr(tabela[i]),strupr(nome));
		if (pesq)
			printf("\n%d \t| %s",i,tabela[i]);
	}	
}

int main ()
{
	char tabela[40][30];
	int i,tam,j;
	char *pesq, nome[30];
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	tabela[40][30]=Inserir_aluno(tabela,i,j);
	Pesquisa(tabela,i,pesq,nome);
	printf("\n\n");
	system("pause");
	return 0;	
	

}

