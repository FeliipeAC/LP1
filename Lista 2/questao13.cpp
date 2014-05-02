#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float venda;
	
	printf("Venda mensal: ");
	scanf("%f",&venda);
	
	if (venda >= 100000)
		printf("Comissao = R$ %.2f\n\n",700+(venda*0.16));
	if ((venda < 100000) & (venda >= 80000))
		printf("Comissao = R$ %.2f",650 + (venda*0.14));
	if ((venda < 80000) & (venda >= 60000))
		printf("Comissao = R$ %.2f",600+(venda*0.14));
	if ((venda <60000) & (venda >= 40000))
		printf("Comissao = R$ %.2f",550+(venda*0.14));
	if ((venda <40000) & (venda >= 20000))
		printf("Comissao = R$ %.2f",500+(venda*0.14));
	if (venda < 20000)
		printf("Comissao = R$ %.2f",400+(venda*0.14));
	
	system("pause");
	return 0;					


}

