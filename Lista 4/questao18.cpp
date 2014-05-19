#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Resultado (char s[],char c, int i, int tam, int j){
	
	printf("Entre com uma string: ");
	gets(s);
	printf("\nUm caractere: ");
	scanf("%c",&c);
	printf("\nUma posicao: ");
	scanf("%d",&i);
	tam=strlen(s);
	for (j=i; j<tam; j++){
		if (s[j] == c){
			printf("\nIndice: %d",j);
			break;
		}
		else{
			printf("\nIndice nao encontrado");
			break;
		}
	}
}

int main ()
{
	char s[20],c;
	int i, tam, j;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	Resultado(s,c,i,tam,j);
	printf("\n\n");
	system("pause");
	return 0;
}

