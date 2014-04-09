#include <stdio.h>
#include <string.h>

int main ()
{
	char nome[15], nome2[15];
	printf("Digite um nome: ");
	scanf("%s",&nome);
	printf("Digite outo nome: ");
	scanf("%s",&nome2);
	printf("\nPrimeiro nome: %s \nSegundo nome: %s",nome, nome2);
	printf("\nSegunda letra do segundo nome: %c\nSegunda letra do segundo nome: %c", nome[1],nome2[1]);
	return 0;
}
