/*Faça um programa que leia um numero inteiro N e depois impirma os N
primeiros numeros naturais impares.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int impar, num, i;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	printf("Digite um numero: ");
	scanf("%d",&num);
	printf("Os %d primeiros numeros naturais impares sao: ",num);
	for (i=0; i<num; i++)
		{
			impar=(2*i)+1;
			printf("%d ",impar);
		}
	printf("\n\n");
	system("pause");
	return 0;
}
