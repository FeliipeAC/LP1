#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int vetor[10], i, cont=0;
	
	printf("Digite dez numeros: ");
	
	for (i=0; i < 10; i++)
		{
			scanf("%d",&vetor[i]);
			if (vetor[i]%2 == 0)
				cont++;
		}
	printf("Quantidade de valores pares: %d\n",cont);
	system("pause");
	return 0;
	
}
