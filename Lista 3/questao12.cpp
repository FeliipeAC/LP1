/*Fa�a um algoritmo que leia um n�mero positivo e imprima seus divisores.*/
#include <stdio.h>
#include <stdlib.h>

void Divisores(){
	int i, num;
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
	return;
}

int main ()
{
	printf("\t\t\t\t\t\t�Por: Felipe Andrade %c�\n\n",184);
	Divisores();
}
