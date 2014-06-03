#include <stdio.h>
#include <stdlib.h>

void Soma(int *x, int y){
	*x+=y;
}

int main (){
	int a, b, soma;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	printf("Digite 2 numeros: \n");
	scanf("%d%d",&a,&b);
	Soma(&a,b);
	printf("\n\nA = %d\nB = %d\n\n",a,b);
	system("pause");
	return 0;
	

}

