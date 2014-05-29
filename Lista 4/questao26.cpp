#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Matricula(int matri[], int i){
	printf("Numero da matricula: ");
	scanf("%d",&matri[i]);
	return matri[i];
}

char Nomes(char nome[][15], int i){
	printf("\nNome: ");
	scanf("%s",&nome[i]);
	return nome[i][15];
}


int Cod_disciplina(int cod_disc[], int i){
	printf("\nCodigo da disciplina: ");
	scanf("%d",&cod_disc[i]);
	return cod_disc[i];
}

float Nota1(float nota1[], int i){
	printf("\nNota 1: ");
	scanf("%f",&nota1[i]);
	return nota1[i];

}

float Nota2(float nota2[], int i){
	printf("\nNota 2: ");
	scanf("%f",&nota2[i]);
	return nota2[i];
}

void Medias(char nome[][15],int matr[], int cod_disc[], float nota1[], float nota2[]){
	int j; 
 	printf("\t\t\t\t\t\tºPor: Felipe Andrade%c º\n",184);
 	for (j=0; j<10;j++)
 	printf("NOME: %s\nMATRICULA: %d\nCOD. DISCIPLINA: %d\nMEDIA: %.2f\n\n",nome[j],matr[j],cod_disc[j],(nota1[j]+(nota2[j]*2))/3);	
}

int main ()
{
	int i,j, matr[10], cod_disc[10];
	char nome[10][15];
	float nota1[10], nota2[10];

	for (i=0;i<10;i++){
		printf("\t\t\t\t\t\tºPor: Felipe Andrade%c º\n",184);
		matr[i]=Matricula(matr,i);
		nome[i][15]=Nomes(nome,i);
		cod_disc[i]=Cod_disciplina(cod_disc,i);
		nota1[i]=Nota1(nota1,i);
		nota2[i]=Nota2(nota2,i);
		system("cls");	
	}
	Medias(nome, matr,cod_disc,nota1,nota2);
}
