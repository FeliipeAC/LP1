#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char Ler_string1(char string1[]){
    printf("Entre com a primeira string :");
    gets(string1);	
	return string1[30];
}

char Ler_string2 (char string2[]){
    printf("\nEntre com a segunda string :");
    gets(string2);	
	return string2[30];
}

void Resultado (int tam){
    if(tam == 0)
      printf("\nAs strings sao iguais.");
    else if(tam < 0)
      printf("\nA string1 eh maior.");
    else if (tam >0)
      printf("\nA string2 eh maior.");	
}

int main()
  {
    char string1[30],string2[30];
    int tam;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade%c º\n",184);
	string1[30]=Ler_string1(string1);
	string2[30]=Ler_string2(string2);
    tam=strcmp(string1,string2);
	Resultado(tam);
	printf("\n\n");
	system("pause");
    return(0); 
  }
