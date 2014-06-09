#include <stdio.h>
#include <stdlib.h>

void Preenche(int vetor[]){
	printf("Vetor:\n%d %d %d %d %d\n\n",vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);
}

int main (){
	int i,vetor[5]={2,5,7,3,8};
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	Preenche(vetor);
	system("pause");
	return 0;		

}

