#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Ler_string (char string[]){
	printf("\nEntre com a segunda string :");
    gets(string);
    string=strupr(string);
	return string[30];	
}

void Sem_vogais(char string[],char string2[],int tam, int j){
	
	int i, k;
	for (i=0; i<tam; i++){
		if ((string[i]!= 'A') && (string[i]!= 'E') && (string[i]!= 'I') && (string[i]!= 'O') && (string[i]!= 'U')){
			string2[j]=string[i];
			j++;
			
		}
	}
	printf("\nString sem as vogais: ");
	for (k=0; k<j;k++)
		printf("%c",string2[k]);	
}

int main ()
{
	char string[30], string2[30];
	int i,tam,j=0,k;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade%c º\n",184);
	string[30]=Ler_string(string);
	tam=strlen(string);
	Sem_vogais(string,string2,tam,j);
	printf("\n\n");
	system("pause");
	return 0;
}

