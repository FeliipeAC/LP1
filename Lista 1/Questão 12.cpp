#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float h,qh;
	printf("Digite quantas horas voce trabalha por mes: ");
	scanf("%f",&h);
	printf("Digite quanto ganha por hora: ");
	scanf("%f",&qh);
	system("cls");
	printf("Salario no mes: %.2f reais",h*qh);
	return 0;	
}
