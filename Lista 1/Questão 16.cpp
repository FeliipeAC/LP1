#include <stdio.h>

int main ()
{
	float alt;
	printf("Digite sua altura: ");
	scanf("%f",&alt);
	printf("Peso ideal: %.2f Kg",(72.7*alt)-58);
	return 0;
}
