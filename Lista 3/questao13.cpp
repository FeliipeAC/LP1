/*F�a um algoritmo utilizando o comando while que mostra uma contagem
regressiva na tela, iniciando de 10 e terminando em 0. Mostra uma 
mensagem "FIM!" ap�s a contagem.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void Contagem(){
	int i=10;
	while (i >= 0)
		{
			printf("%d\n",i);
			i--;
			Sleep(1000);
		}
	printf("\n\nFim!\n\n");
	system("pause");	
	return;
}
int main () 
{
	printf("\t\t\t\t\t\t�Por: Felipe Andrade %c�\n\n",184);
	Contagem();	
}
