#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float num;
	
	printf("Digite um numero: ");
	scanf("%f",&num);
	printf("\n%.2f ao quadrado = %.2f\n",num,num*num);
	system("pause");
	return 0;
	
	
	
}
