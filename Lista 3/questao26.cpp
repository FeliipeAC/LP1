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
int main ()
{
	int vetor[10], vetor2[10], i, j, x=0,k, y=0;
	
	printf("Digite 10 numeros para o vetor: ");
	for (i=0; i<10; i++)
		scanf("%d",&vetor[i]);
	Ordena(vetor,i);
	for (j=1; j<10; j++){
		if ((vetor[j] == vetor[j-1]) && (vetor[j] != vetor[j+1])) 
		{
			vetor2[y]=vetor[j];
			y++;
		}		
	}
	
	printf("\nNumeros iguais: ");
	for (k=0; k<y; k++)			
		printf("%d ",vetor2[k]);
	printf("\n\n\n\n\t\t\t\t\tºPor: Felipe Andrade%cº",184);
	printf("\n\n");	
	system("pause");
	return 0;		
}
