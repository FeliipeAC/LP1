/*Leia um numero positivo do usuario, ent�o, calcule e imprima a sequ�ncia
de Fibonacci at� o peimeiro numero superior ao numero lido.*/

#include <stdio.h>
#include <stdlib.h>

int main () 
{
	int a=0,b=1,aux=0,i,num;
	printf("\t\t\t\t\t\t�Por: Felipe Andrade %c�\n\n",184);
	printf("Digite um numero: ");
	scanf("%d",&num);
	printf("Serie de Fibonacci:\n");
	printf("%d\n",b);
	for (i=0; aux<num; i++)
	{
		aux=a+b;
		a=b;
		b=aux;
		printf("%d\n",aux);
		
	}
	printf("\n\n");
	system("pause");
	return 0;
}
