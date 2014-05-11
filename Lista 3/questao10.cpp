/*Usando o comando for, faça um algoritmo que conte o número de 1'a que
aparecem em uma string.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	char nome[20];
	int i, cont=0, tam;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	printf("Digite os numeros: ");
	scanf("%s",&nome);
	tam=strlen(nome);
	
	for (i=0; i <= tam ; i++)
	{
		if (nome[i]=='1')
			cont++;
	}
	printf("\nO numero de 1s na string eh: %d\n\n",cont);
	system("pause");
	return 0;
	
	
}
