#include <stdio.h>
#include <stdlib.h>
#define LIM 50

int Maior_num (int vetor[], int n, int maior){
	int i;
	maior=vetor[0];
	for (i=1; i<n; i++){
		if (vetor[i] > maior)
		   maior=vetor[i];
	}
	return maior;
}

int main (){
	int vetor[LIM], i, n, j=1, lin, maior;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);	
	printf("\nDigite o tamanho do vetor: ");
	scanf("%d",&n);
	printf("\nNumero para o vetor: \n");
	for (i=0; i<n; i++)
		scanf("%d",&vetor[i]);
	system("cls");
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);	
	printf("\nQuantos elementos por linha: ");
	scanf("%d",&lin);
	printf("\n\nVetor: \n\n");
	for (i=0; i<n; i++){
		printf("%d ",vetor[i]);
		if (i == ((lin-1)*j)+(j-1)){
		   printf("\n");
		   j++;
        }
	}
	maior=Maior_num(vetor,n,maior);	
	printf("\n\nMaior numero do vetor = %d\n\n",maior);
	system("pause");
	return 0;
}

