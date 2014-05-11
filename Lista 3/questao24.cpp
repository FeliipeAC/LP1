/* Considere um vetor A com 11 elementos onde A1 < A2<...< A6 > A7 > A8 >...> A11
, ou seja, está a ordenado em ordem crescente até e o sexto elemento, e a partir
desse elemento está a ordenado em ordem decrescente. Dado o vetor da questão
ao anterior, proponha um algoritmo para ordenar os elementos.*/

#include <stdio.h>
#include <stdlib.h>

int Ordena(int v[], int t){
	int j, s, Aux;
do{
	s = 1;
	t = t - 1;
	for (j = 0; j < t; j = j + 1)
	if (v[j] > v[j + 1])
	{
		Aux = v[j];
		v[j] = v[j + 1];
		v[j + 1] = Aux;
		s = 0;
	}
}
while (s == 0);
return s;
}

int main (){
	int vetor[11], i;
		vetor[0]=2;
		vetor[1]=5;
		vetor[2]=6;
		vetor[3]=8;
		vetor[4]=11;
		vetor[5]=15;
		vetor[6]=19;
		vetor[7]=20;
		vetor[8]=17;
		vetor[9]=14;
		vetor[10]=10;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	printf("Vetor: ");
	for	(i=0; i<12; i++)
		printf("%d ",vetor[i]);
	Ordena(vetor,11);
	printf("\n\nVetor ordenado: ");
	for (i=0; i<12; i++)
		printf("%d ",vetor[i]);
	printf("\n\n");
	system("pause");
	return 0;	

}
 

