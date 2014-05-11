/*Faça um programa que rece um numero inteiro maior do que 1 e verifique
se o numero fornecido é primo ou não*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int num;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	printf("Digite um numero maior que 1: ");
	scanf("%d",&num);
	if (num == 2)
		printf("\nEh um numero primo\n\n");
	if (num != 2)
	{
		if (num%2 == 0)
			printf("\nNao eh numero primo\n\n");
		if (num%2 ==1)
			printf("\nEh numero primo\n\n");
			
	}	
	system("pause");
	return 0;
	
}
