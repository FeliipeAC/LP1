#include <stdio.h>

int main ()
{
	int impar, num, i;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	printf("Os %d primeiros numeros naturais impares sao: ",num);
	for (i=0; i<num; i++)
		{
			impar=(2*i)+1;
			printf("%d ",impar);
		}
	return 0;
}
