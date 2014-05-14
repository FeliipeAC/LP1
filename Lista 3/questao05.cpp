/*Faça um programa que leia um numero inteiro N e depois impirma os N
primeiros numeros naturais impares.*/

#include <stdio.h>
#include <stdlib.h>

int Ler_num (int n){
	printf("Digite um numero: ");
	scanf("%d",&n);
	return n;	
}

void Num_natu_impar (int n){
	int impar, i;
	printf("\nOs %d primeiros numeros naturais impares sao: \n\n",n);
	for (i=0; i<n; i++)
		{
			impar=(2*i)+1;
			printf("%d\t",impar);
		}
	printf("\n\n");
	system("pause");
	return;
	
}
int main ()
{
	int num;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	num=Ler_num(num);
	Num_natu_impar(num);
}
