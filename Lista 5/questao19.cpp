#include <stdio.h>
#include <stdlib.h>

void Le_vetor(int vetor[]){
	int i;
	printf("Digite 5 numeros: \n");
	for (i=0; i<5; i++)
		scanf("%d",&vetor[i]);
		
}

void Vet_dobro(int vetor[]){
	int i;
	printf("\nDobro de cada valor: \n");
	for (i=0; i<5; i++)
		printf("%d ",2*vetor[i]);
	
}

int main (){
	int vetor[5];
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);	
	Le_vetor(vetor);
	Vet_dobro(vetor);
	printf("\n\n");
	system("pause");
	return 0;	

}

