#include <stdio.h>
#include <stdlib.h>

void Dobro(int *a, int *b){
	*a=2*(*a);
	*b=2*(*b);
}

int main (){
	int a, b;
	printf("\t\t\t\t\t\t�Por: Felipe Andrade %c�\n\n",184);	
	printf("\nDigite dois valores: \n");
	scanf("%d%d",&a,&b);
	Dobro(&a,&b);
	printf("\nSoma do dobro dos numeros: %d\n\n",a+b);
	system("pause");
	return 0;
}

