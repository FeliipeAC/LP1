/*Escreva um programa em C que escreva na tela de 1 em 1, de 1 até 100,
3 vezes. A primeira vez deve usar a estrutura de repetição for, a segunda
while, e a terceira do while;*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void Tipo1 (){
	int i;
	for (i=1;i <= 100;i++)
		{
			printf("%d\t",i);
			Sleep(1000);
		}
	printf("\n");
	return;	
}

void Tipo2(){
	int j=1;
	while (j <= 100)
		{
			printf("%d\t",j);
			j++;
			Sleep(1000);	
		}
	printf("\n");
	return;
}

void Tipo3(){
	int k=1;
	do
	{
		printf("%d\t",k);
		k++;
		Sleep(1000);
		
	} while(k<=100);
	return;	
}
	
int main () 
{
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n\n",184);
	Tipo1();
	Tipo2();
	Tipo3();
	return 0;
}
