#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float hora, q_hora, bruto, descontos;
	printf("Quanto ganha por hora: ");
	scanf("%f",&q_hora);
	printf("Quantas horas trabalha no mes: ");
	scanf("%f",&hora);
	bruto=q_hora*hora;
	system("cls");
	printf("+ Salaraio bruto   = %.2f reais",bruto);
	printf("\n- Imposto de renda = %.2f reais",bruto*0.11);
	printf("\n- INSS             = %.2f reais",bruto*0.08);
	printf("\n- Sindicato        = %.2f reias",bruto*0.05);
	descontos=(bruto*0.11)+(bruto*0.08)+(bruto*0.05);
	printf("\n---------------------------------");
	printf("\nSalario liquido    = %.2f reais",bruto-descontos);
	
}
