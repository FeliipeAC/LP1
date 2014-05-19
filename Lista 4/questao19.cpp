#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void String(char s[], int i, int j, int k){

	printf("Entre com uma string: ");
	gets(s);
	printf("\nDigite dois numeros inteiros: ");
	scanf("%d%d",&i,&j);
	printf("\nString: ");
	for (k=i; k<=j; k++)
		printf("%c",s[k]);
	
}


int main ()
{
	char s[20];
	int i, j, k;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	String(s,i,j,k);
	printf("\n\n");
	system("pause");
	return 0;
}

