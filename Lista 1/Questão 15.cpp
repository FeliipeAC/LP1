#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int x,y;
	float z;
	printf("Digite dois numeros inteiros: ");
	scanf("%d %d",&x,&y);
	printf("Digite um numero real: ");
	scanf("%f",&z);
	system("cls");
	printf("a. %.2f\n",(2*x)*float(y/2));
	printf("b. %.2f\n",(3*x)+z);
	printf("c. %.2f\n",z*z*z);
	return 0;
}
