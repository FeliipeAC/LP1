#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Ler_string1(char string1[]){
    printf("Entre com a primeira string :");
    gets(string1);	
	string1=strupr(string1);
	return string1[30];
}

char Ler_string2 (char string2[]){
    printf("\nEntre com a segunda string :");
    gets(string2);	
	string2=strupr(string2);
	return string2[30];
}


void Resultado(char* verifica, char string1[], char string2[]){
	if (verifica)
		printf("\nA string \"%s\" esta contida em \"%s\" ",string2,string1);
	else
		printf("\nA string \"%s\" nao esta contida em \"%s\" ",string2,string1);
}

int main ()
{
	char string1[30],string2[30];
	char *verifica;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade%c º\n",184);
	string1[30]=Ler_string1(string1);
	string2[30]=Ler_string2(string2);
	verifica=strstr(string1,string2);	
	Resultado(verifica,string1,string2);
	printf("\n\n");
	system("pause");
	return 0;	
}

