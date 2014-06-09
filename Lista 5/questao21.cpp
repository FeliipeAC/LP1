#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Le_strings(char a[], char b[]){
	printf("1 string: ");
	scanf("%s",a);
	printf("\n2 string: ");
	scanf("%s",b);
}

void Ocorrencia(char a[], char b[], int tama, int tamb){
	if (strstr(a,b))
	   printf("\nOcorre!\n\n");
	else
		printf("\nNao ocorre!\n\n");
}

int main (){
	char str1[15], str2[15];
	int tam1, tam2;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);		
	Le_strings(str1,str2);
	tam1=strlen(str1);
	tam2=strlen(str2);
	Ocorrencia(str1,str2,tam1,tam2);
	system("pause");
	return 0;
}

