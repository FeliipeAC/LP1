/*Faça um programa que peça o usuario para digitar 10 valroes e some-os.*/

#include <stdio.h>
#include <stdlib.h>

void Soma(){
	int i=1, num, soma;
	printf("Digite dez numeros: ");
	scanf("%d",&num);
	soma=num;
	for (i=1; i <= 9; i++)
		{
			scanf("%d",&num);
			soma=soma + num;
		}
	printf("\nSoma dos dez numeros digitados: %d\n\n",soma);
	system("pause");
	return;	
}
int main ()
{
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	Soma();
}

