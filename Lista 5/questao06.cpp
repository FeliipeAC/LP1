#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Raizes(float a, float b, float c, float *x1, float *x2){
	float delta;
	delta=(b*b)-(4*a*c);
	if (delta < 0)
	   return 0;
	if (delta == 0){
		*x1=*x2=-b/(2*a);
		return 1;
	}
	if (delta > 0){
		*x1=(-b+sqrt(delta))/(2*a);
		*x2=(-b-sqrt(delta))/(2*a);
		return 2;
	}
}

int main (){
	float a, b, c, x1, x2;
	int retorno;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	printf("\nDigite os coeficientes A, B e C da equacao Ax%c + Bx + C = 0: \n",253);
	scanf("%f%f%f",&a,&b,&c);
	retorno=Raizes(a,b,c,&x1,&x2);
	if (retorno == 0)
	   printf("\nNao existe raizes reais!\n\n");
	else if (retorno == 1)
	   printf("\nRaiz unica (ou duas raizes iguais): x1 = x2 = %.2f\n\n",x1);
	else if (retorno > 0)
	   printf("\nDuas raizes distintas: x1= %.2f | x2= %.2f\n\n",x1,x2);      
	system("pause");
	return 0;   
}

