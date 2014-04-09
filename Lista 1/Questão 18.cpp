#include <stdio.h>

int main ()
{
	float peso;
	printf("Peso (Kg): ");
	scanf("%f",&peso);
	printf("\n");
	if (peso <= 50)
		printf("Execesso: 0 Kg\nMulta: 0 reais");
	else
		printf("Excesso: %.2f Kg\nMulta: %.2f reias",peso-50,(peso-50)*4);
	return 0;	
}
