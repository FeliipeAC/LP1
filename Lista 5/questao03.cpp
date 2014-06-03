#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Ordena(int vet[], int t){
	int j, s, Aux;	
	if ((vet[0] == vet[1]) && (vet[1]==vet[2]))
		return 1;
	else{
		do{
			s = 0;
			t = t - 1;
			for (j = 0; j < t; j++){
				if (vet[j] > vet[j + 1]){
				   Aux = vet[j];
				   vet[j] = vet[j + 1];
				   vet[j + 1] = Aux;
				   s = 1;
 			   }
			}
		}while(s==1);
		return s;
	}
	
}

int main (){
	int vet[3], i, t=3;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	printf("Digite 3 numeros: \n");
	for (i=0; i<3; i++)
		scanf("%d",&vet[i]);
	if (Ordena(vet,t)==0){
		printf("\nNumeros ordenados: ");
		for (i=0; i<3; i++)
			printf("%d ",vet[i]);		
	}
	printf("\n\n");
	system("pause");
	return 0;
}

