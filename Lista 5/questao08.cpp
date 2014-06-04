#include <stdio.h>
#include <stdlib.h>

void Maior_numero(int vetor[], int *cont, int i, int *maior){
	int j,k,m;
	*cont=0;
	for (j=0; j<i; j++){
		if (vetor[j] > *maior)
		   *maior=vetor[j];
	}
	for (k=0; k<i; k++){
		if (vetor[k] == *maior)
		   (*cont)++;
	}

}

int main (){
	int vetor[20], i=0, cont, maior;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	printf("\nDigite numeros para o vetor (0 para parar): \n");
	scanf("%d",&vetor[i]);
	while (vetor[i] != 0){
		i++;
		scanf("%d",&vetor[i]);
	}
	Maior_numero(vetor,&cont,i,&maior);
	printf("\n\nMaior numero: %d\nOcorrencia: %d\n\n",maior,cont);
	system("pause");
	return 0;

}

