/*Fça um algoritmo utilizando o comando while qye mostra uma contagem
regressiva na tela, iniciando de 10 e terminando em 0. Mostra uma 
mensagem "FIM!" após a contagem.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main () 
{
	int i=10;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	while (i >= 0)
		{
			printf("%d\n",i);
			i--;
			Sleep(1000);
		}
	printf("\n\nFim!\n\n");
	system("pause");	
	return 0;
	
	
	
	
	
}
