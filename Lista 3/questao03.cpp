/*Leia um numero positivo do usuario, então, calcule e imprima a sequência
de Fibonacci até o peimeiro numero superior ao numero lido.*/

#include <stdio.h>
#include <stdlib.h>

int Ler_numero(int n){
	printf("Digite um numero: ");
	scanf("%d",&n);
	return n;	
}

void Serie_fib (int n){
	int a=0, b=1, i, aux=0;
	printf("\nSerie de Fibonacci:\n");
	printf("%d\n",b);
	for (i=0; aux<n; i++)
	{
		aux=a+b;
		a=b;
		b=aux;
		printf("%d\n",aux);
		
	}
	printf("\n\n");
	system("pause");
	return;	
}
int main () 
{
	int num;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	num=Ler_numero(num);
	Serie_fib(num);
}
