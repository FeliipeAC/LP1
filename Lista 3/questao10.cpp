#include <stdio.h>
#include <string.h>

int main ()
{
	char nome[20];
	int i, cont=0, tam;
	
	printf("Digite os numeros: ");
	scanf("%s",&nome);
	tam=strlen(nome);
	
	for (i=0; i <= tam ; i++)
	{
		if (nome[i]=='1')
			cont++;
	}
	printf("\nO numero de 1s na string eh: %d",cont);
	return 0;
	
	
}
