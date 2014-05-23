#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Inversa (char frase_inv[]){
	int j, i=1,tam;
	char frase[30];
	printf("Frase: ");
	gets(frase);
	tam=strlen(frase);
	for (j=0; j<=tam;j++){
		frase_inv[j]=frase[tam-i];
		i++;
	}
	return frase_inv[tam];
}

void Substituindo(char frase_inv[], char frase_inv2 []){
	int i,tam,tam2;
	tam=strlen(frase_inv);
	tam2=strlen(frase_inv2);
	for (i=0; i<=tam;i++){
		if ((frase_inv[i] == 'a') || (frase_inv[i] == 'A'))
			frase_inv[i]='*';
	}
	for (i=0; i<=tam2;i++){
		if ((frase_inv2[i] == 'a') || (frase_inv2[i] == 'A'))
			frase_inv2[i]='*';
	}
	printf("\nResulado: \n");
	puts(frase_inv);
	puts(frase_inv2);		
}

int main ()
{	
	char frase_inv[30],frase_inv2[30];
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	frase_inv[30]=Inversa(frase_inv);
	frase_inv2[30]=Inversa(frase_inv2);
	Substituindo(frase_inv,frase_inv2);
	printf("\n\n");
	system("pause");
	return 0;

}

