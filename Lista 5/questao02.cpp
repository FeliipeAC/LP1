#include <stdio.h>
#include <stdlib.h>

void Ordena(int* x, int* y){
	int aux;
	if (*x < *y){
		aux=*x;
		*x=*y;
		*y=aux;
	}
	
}


int main (){
	int a, b, aux;
	printf("\t\t\t\t\t\t�Por: Felipe Andrade %c�\n\n",184);
	printf("Digite 2 numeros inteiros: \n");
	scanf("%d %d",&a,&b);
	printf("\nA = %d\nB = %d",a,b);
	Ordena(&a,&b);
	printf("\n\nA = %d\nB = %d\n\n",a,b);
	system("pause");
	return 0;
}
