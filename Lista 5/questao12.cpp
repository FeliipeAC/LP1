#include <stdio.h>
#include <stdlib.h>
#define N 100

void Min_max(int vetor[], int n, int *min, int *max){
	int i;
	*min=*max=vetor[0];
	for (i=1; i<n-1; i++){
		if (vetor[i] > *max)
		   *max=vetor[i];
		if (vetor[i] < *min)
		   *min=vetor[i];   
	}
}

int main (){
	int vetor[N], n, i, min, max;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	printf("\n	Digite o tamanho do vetor: ");
	scanf("%d",&n);
	printf("\nNumeros para o vetor: \n");
	for (i=0; i<n-1; i++)
		scanf("%d",&vetor[i]);
	Min_max(vetor,n,&min,&max);
	printf("\n\nElemento maximo: %d\nElemento minino: %d\n\n",max,min);
	system("pause");
	return 0;	
}

