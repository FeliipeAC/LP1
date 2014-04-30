#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float salario, prest;
	
	printf("Salario: ");
	scanf("%f",&salario);
	printf("Prestacao do emprestimo: ");
	scanf("%f",&prest);
	if (prest > salario*0.2)
		printf("\nEmprestimo nao concedido!\n\n");
	else
		printf("\nEmprestimo concedido!\n\n");
	system("pause");
	return 0;		
}
