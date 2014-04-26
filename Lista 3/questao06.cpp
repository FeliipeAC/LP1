#include <stdio.h>

int main ()
{
	int i, soma;
	
	for (i=0; i<50; i++)
			soma=(2*i) + soma;
	printf("A soma dos 50 primeiros numeros pares eh: %d",soma);
	return 0;		
	
	
}
