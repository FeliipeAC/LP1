/*Fa�a um programa que rece um numero inteiro maior do que 1 e verifique
se o numero fornecido � primo ou n�o*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int num;
	printf("\t\t\t\t\t\t�Por: Felipe Andrade %c�\n\n",184);
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
