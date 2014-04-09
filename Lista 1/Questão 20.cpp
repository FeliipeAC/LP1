#include <stdio.h>

int main ()
{
	float arquivo, velocidade;
	printf("Tamanha do arquivo (em Mb): ");
	scanf("%f",&arquivo);
	printf("Velocidade do link (em Mbps): ");
	scanf("%f",&velocidade);
	printf("\n");
	printf("Tempo aproximado de download: %.2f segundos ",(arquivo/velocidade)/60);
	return 0;
}
