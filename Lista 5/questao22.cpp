#include <stdio.h>
#include <stdlib.h>

void Preenche(int vetor[], int valor){
	vetor[0]=valor;
	vetor[1]=valor;
	vetor[2]=valor;
	vetor[3]=valor;
	vetor[4]=valor;
}

int main (){
	int i,vetor[5], valor=8;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	Preenche(vetor,valor);
	system("pause");
	return 0;		

}

