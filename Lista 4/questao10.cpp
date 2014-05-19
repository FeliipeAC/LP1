#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Frase_sem_esp(){
	int i,j=0,tam;
	char frase[40];
	printf("Digite uma frase: ");
	gets(frase);
	tam=strlen(frase);
	for(i = 0;i <= tam+1;i++){
		 if(frase[i] != ' '){
			  frase[j] = frase[i];
			  j++;
		 }
	}	
	printf("\nFrase sem espaço: ");
	puts(frase);
}

int main ()
{
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	Frase_sem_esp();
	printf("\n\n");
	system("pause");	
	return 0;

}

