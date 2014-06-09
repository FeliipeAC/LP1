#include <stdio.h>
#include <stdlib.h>

int Soma_vetores(int vet1[], int vet2[], int soma[], int tam1, int tam2){
	int i;
	if (tam1 == tam2){
		for (i=0; i<tam1; i++){
			soma[i]=vet1[i] + vet2[i];
		}
		return 0;
	}

}

void Le_vetores(int vet1[], int vet2[], int *tam1, int *tam2, int i){
	printf("\nDigite numeros para o vetor 1( 0(zero) para parar): \n");
	do{
		i++;
		scanf("%d",&vet1[i]);
	}while (vet1[i] != 0);
	*tam1=i;
	i=-1;
	printf("Digite numeros para o vetor 2( 0(zero) para parar): \n");
	do{
		i++;
		scanf("%d",&vet2[i]);
	}while (vet2[i] != 0);
	*tam2=i;	
}

int main (){
	int vet1[20], vet2[20], soma[20], i=-1, tam1, tam2;
		printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	Le_vetores(vet1,vet2,&tam1,&tam2,i);
	if (Soma_vetores(vet1,vet2,soma,tam1,tam2) == 0){
		printf("\nSoma dos vetores: ");
		for (i=0; i<tam1; i++)
			printf("%d ",soma[i]);
	}
	printf("\n\n");
	system("pause");
	return 0;	
}

