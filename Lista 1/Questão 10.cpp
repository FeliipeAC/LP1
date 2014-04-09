#include <stdio.h>

int main ()
{
	float pi = 3.14;
	float raio;
	printf("Digite o valor do raio: ");
	scanf("%f",&raio);
	printf("A area do circulo de raio %.1f eh: %.2f",raio,pi*(raio*raio));
	return 0;
}
