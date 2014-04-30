#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	int a, b; 
	float hip;
	
	printf("Digite os valores a e b do triangulo: \n");
	scanf("%d%d",&a,&b);
	hip=sqrt((a*a)+ (b*b));
	printf("\nHipotenusa = %.1f\n\n",hip);
	system("pause");
	return 0;
	
}
