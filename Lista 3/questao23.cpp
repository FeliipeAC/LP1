/*Fa�a um programa para ler a nota da prova de 15 alunos e calcule e imprima
a n�dia geral.
Obs.: Tente fazer o programa usando fun��es, usando uma fun��o para ler as
notas e outra para calcular a m�dia*/

#include <stdio.h>
#include <stdlib.h>

float ler_notas(float soma=0)
{
		int i;
	float notas[15];
	printf("\n\nDigite as 15 notas: ");
	for (i=0; i < 15; i++)
		{
			scanf("%f",&notas[i]);
			soma+=notas[i];
		}
	return soma;
}

float calc_media (float media, float soma)
{
	media=soma/15;
	printf("\n� Media geral = %.2f �\n\n",media);	
	return media;
}
 
int main () 
{
	float media, soma;
	printf("\t\t\t\t\t\t�Por: Felipe Andrade%c �",184);
	soma=ler_notas(soma);
	media=calc_media(media,soma);
	system("pause");
	return 0;	
	
}
