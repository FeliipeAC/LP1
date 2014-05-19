#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Ler_string(char frase[]){
	printf("Escreva uma palavra/frase: ");
	gets(frase);
	return frase[30];	
}

int Palindromo (char frase_se[],char frase_inv_se[], int tam){
	int i, j, cont=0;
	for (i=0; i<tam; i++){
		if (frase_se[i] == frase_inv_se[i])
			cont++;
	}
	if (cont == tam)
		printf("\n%d",1);
	else
		printf("\n%d",0);	
} 

char Inversa (char frase[], char frase_inv[], int tam){
	int j, i=1;
	for (j=0; j<=tam;j++){
		frase_inv[j]=frase[tam-i];
		i++;
	}
	return frase_inv[tam];
}
char Apaga_esp(char frase[], char frase_se[], int tam){
	int i,j=0;
	for(i = 0;i <= tam+1;i++){
		 if(frase[i] != ' '){
			  frase_se[j] = frase[i];
			  j++;
		 }
	}	
	
	return frase_se[tam];
}
int main ()
{
	char frase[30], frase_inv[30], frase_se[30],frase_inv_se[30];
	int tam,tam_se, i;
	frase[30]=Ler_string(frase);
	tam=strlen(frase);
	frase_se[30]=Apaga_esp(frase,frase_se,tam);
	tam_se=strlen(frase_se);
	frase_inv[30]=Inversa(frase,frase_inv,tam);
	frase_inv_se[30]=Apaga_esp(frase_inv,frase_inv_se,tam);
	Palindromo(frase_se,frase_inv_se,tam_se);
	printf("\n\n");
	system("pause");
	return 0;
	

}


