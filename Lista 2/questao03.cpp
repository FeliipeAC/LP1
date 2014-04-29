#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int num[3], i;
	float soma=0;
	
	printf("Digite 3 valores: ");
	for (i=0; i<3; i++)
		scanf("%d",&num[i]);
	for (i=0; i<3; i++)
		soma+=num[i]*num[i];
	
	printf("\nA soma do quadrado dos 3 numeros eh: %.2f\n\n",soma);
	system("pause");
	return 0;
	
	
	
}
