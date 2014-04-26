#include <stdio.h>
#include <string.h>

int main ()
{
	char nome[20];
	int i=0, tam;
	
	printf("Digite os numeros: ");
	scanf("%s",&nome);
	tam=strlen(nome);
	
	while (i <= tam)
	{
		if (nome[i]=='0')
			nome[i]='1';
		i++;	
	}
	printf("\nComo ficou: %s",nome);
	return 0;
	
	
}
