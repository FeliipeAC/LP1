#include <stdio.h>
#include <stdlib.h>

int main (){
	int a, b;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	printf("Digite 2 numeros: \n");
	scanf("%d%d",&a,&b);
	if (&a > &b)
	   printf("\n%d\n\n",a);
	else
		printf("\n%d\n\n",b);
	system("pause");
	return 0;

}

