#include <stdio.h>

int main () 
{
	int a=0,b=1,aux=0,i,num;
	
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

	return 0;
}
