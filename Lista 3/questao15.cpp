/*Fa�a um programa que some todos os n�meros naturais abaixo de 1000 que
s�o m�ltiplos de 3 ou 5.*/

#include <Stdio.h>
#include <stdlib.h>

void Soma_num_nat(){
	int soma=0, i;
	for (i=0; i < 10; i++)
	{
		if ((i%3 == 0) | (i%5 == 0))
			soma+=i;
	}
	printf("Soma: %d\n\n",soma);
	system("pause");
	return;	
}

int main () 
{
	printf("\t\t\t\t\t\t�Por: Felipe Andrade %c�\n\n",184);
	Soma_num_nat();
	
}
