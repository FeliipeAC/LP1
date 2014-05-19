#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Codigo_cesar(){
	char string[60];
	int i, tam;
	
	printf("String: ");
	gets(string);
	tam=strlen(string);
	for (i=0; i<tam; i++){
		if (string[i] != ' ')
			string[i]=string[i] + 3;
	}
	printf("\nString no Codigo de Cesar: ");
	puts(string);	
}

int main ()
{
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	Codigo_cesar();
	printf("\n\n");
	system("pause");	
	return 0;
}

