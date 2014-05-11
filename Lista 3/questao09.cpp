/*Escreva um programa em C que escreva na tela de 1 em 1, de 1 até 100,
3 vezes. A primeira vez deve usar a estrutura de repetição for, a segunda
while, e a terceira do while;*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main () 
{
	int i, j=1,k=1, x;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n\n",184);
	for (i=1;i <= 100;i++)
		{
			printf("%d\t",i);
			Sleep(1000);
		}
	printf("\n");
	while (j <= 100)
		{
			printf("%d\t",j);
			j++;
			Sleep(1000);	
		}
	printf("\n");
	do
	{
		printf("%d\t",k);
		k++;
		Sleep(1000);
		
	} while(k<=100);
	system("pause");
	return 0;
}
