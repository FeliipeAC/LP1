#include <stdio.h>

int main()
{
	float l;
	printf("Digite a medida do lado do quadrado: ");
	scanf("%f",&l);
	printf("Area do quadrado = %.2f m^2 \nDobro da area = %.2f",l*l,2*(l*l));
	return 0;
}
