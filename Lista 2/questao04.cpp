#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float salario;
	
	printf("Digit seu salario: ");
	scanf("%f",&salario);
	printf("\nNovo salario (reajuste de 25%%) = %.2f\n\n",salario*1.25);
	system("pause");
	return 0;
	
	
}
