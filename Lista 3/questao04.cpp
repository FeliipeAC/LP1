/*Faça um programa que determine e mostre os cinco primeiros multiplos de 3,
considerando numeros maiores que 0;*/

#include <stdio.h>
#include <stdlib.h>

void Multiplos (){
	int i, mult;
	
	printf("Os cincos primeiros multiplos de 3 sao: ");
	for (i=1;i<6;i++)
		{
			mult=3*i;
			printf("%d ",mult);
		}
	printf("\n\n");
	system("pause");
	return;	
}

int main ()
{
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	Multiplos();

}
