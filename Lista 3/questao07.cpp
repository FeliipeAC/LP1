/*Faça um programa que rece um numero inteiro maior do que 1 e verifique
se o numero fornecido é primo ou não*/

#include <stdio.h>
#include <stdlib.h>

int Ler_num(int num){
	printf("Digite um numero maior que 1: ");
	scanf("%d",&num);
	return num;	
}

void Resultado (int num){
	if (num == 2)
		printf("\n\220 um numero primo!\n\n");
	if (num != 2)
	{
		if (num%2 == 0)
			printf("\n Nao \202 numero primo!\n\n");
		if (num%2 ==1)
			printf("\n\220 numero primo!\n\n");
			
	}	
	system("pause");
	return;	
}
int main ()
{
	int num;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	num=Ler_num(num);
	Resultado(num);	
}
