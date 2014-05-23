#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Palavra( char palavra[]){
	printf("Palavra: ");
	scanf("%s",palavra);
	return palavra[15];
}

int Qnt_vogais(char palavra[], int cont_vogais){
	int i;
	for (i=0; palavra[i] != '\0';i++){
		if ((palavra[i] == 'a') || (palavra[i] == 'e') || (palavra[i] == 'o') || (palavra[i] == 'i') || (palavra[i] == 'u'))
		   cont_vogais++;
	}
	return cont_vogais;
}

char Caractere(char caract){
	printf("\nEntre com um caractere: ");
	scanf("\n%c",&caract);
	return caract;
}

char Subst_caractere(char palavra[], char palavra_alt[], char caractere ){
	int i,j=0;
	strcpy(palavra_alt,palavra);
	for (i=0; palavra[i] != '\0'; i++){
		if ((palavra[i] == 'a') || (palavra[i] == 'e') || (palavra[i] == 'o') || (palavra[i] == 'i') || (palavra[i] == 'u'))
		   palavra_alt[i]=caractere;
		   
	}
	return palavra_alt[i];
		
}

void Resultado(char palavra[],char palavra_alt[], int cont_vogais, char caractere){
	int i;
	printf("\nA palavra \"%s\" tem %d vogais",palavra,cont_vogais);
	printf("\n\nPalavra \"%s\" com o caractere \"%c\" no lugar das vogais: %s",palavra,caractere,palavra_alt);
	
}

int main ()
{
 	char palavra[15], palavra_alt[15], caract;
 	int cont_vogais;
 	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	 palavra[15]=Palavra(palavra);
	cont_vogais=Qnt_vogais(palavra,cont_vogais);
 	caract=Caractere(caract);
	palavra_alt[15]=Subst_caractere(palavra,palavra_alt,caract);
 	Resultado(palavra,palavra_alt,cont_vogais,caract);
 	printf("\n\n");
 	system("pause");
 	return 0;
}

