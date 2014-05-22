#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Maiuscula_P_Minicusla(char string[]){
	
	printf("Entre com uma strig: ");
	gets(string);
	printf("\nString com letras minusculas: %s",strlwr(string));
	
}

int main (){
	
	char string[30];
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	Maiuscula_P_Minicusla(string);
	printf("\n\n");
	system("pause");
	return 0;
}
