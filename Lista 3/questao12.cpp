/*Fa�a um algoritmo que leia um n�mero positivo e imprima seus divisores.*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i, num;
	printf("\t\t\t\t\t\t�Por: Felipe Andrade %c�\n\n",184);
	printf("Digite um numero positivo: ");
	scanf("%d",&num);
	printf("\nDivisores: ");
	for (i=1; i <= num; i++)
	{
		if ((num%i) == 0)
			printf("%d ",i);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
