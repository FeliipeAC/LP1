#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int dias;
	float bruto, ir;
	printf("Quantidade de dias trabalhado: ");
	scanf("%d",&dias);
	bruto=30*dias;
	ir=(30*dias)*0.08;
	printf("\nCALCULO DO PAGAMENTO\n");
	printf("\nValor bruto: R$ %.2f\nImposto de renda(8%%): %.2f",bruto,ir);
	printf("\n---------------------------\nValor liquido: R$ %.2f\n\n",bruto-ir);
	system("pause");
	return 0;
}
