#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Strings(char str1[], char str2[]){
	int i;
	printf("Digite um nome: ");
	gets(str1);
	printf("\nOutro nome: ");
	gets(str2);
	if (strcmp(str1,str2) > 0){
		printf("\nOrdem alfabetica:\n%s\n%s",str2,str1);	
		return;
	}
	printf("\nOrdem alfabetica:\n%s\n%s",str1,str2);
	}
	


int main ()
{
	char str1[20], str2[20];
	printf("\t\t\t\t\t\tºPor: Felipe Andrade%c º\n",184);
	Strings(str1,str2);
	printf("\n\n");
	system("pause");
	return 0;
}

