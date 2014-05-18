#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Ler_str1(char str1[]){
    printf("Entre com a primeira string :");
    gets(str1);	
	return str1[30];
}

char Ler_str2 (char str2[]){
    printf("\nEntre com a segunda string :");
    gets(str2);	
	return str2[30];
}

int Ler_num (int num){
	printf("\nDigite um numero inteiro: ");
	scanf("%d",&num);
	return num;
}

void Concatenar(char str1[], char str2[], int num){
	printf("\nConcatenacao de %d caracteres da string2 para string1: %s\n\n",num,strncat(str1,str2,num));
}
int main ()
{
    char str1[30],str2[30];
    int num,i;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade%c º\n",184);
	str1[30]=Ler_str1(str1);
	str2[30]=Ler_str2(str2);    
	num=Ler_num(num);
	Concatenar(str1,str2,num);
	for (i=0;i<30;i++)
	str1[i] = NULL;
	system("pause");
	return 0;
}

