#include <stdio.h>

int main ()
{
	float m;
	printf("Digite o valor em metros: ");
	scanf("%f",&m);
	printf("Conversao: \n");
	printf("%.2f metro(s) ------> %.2f centimetro(s)",m, m*100);
	return 0;
}
