#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int num;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	printf("\nAntecessor: %d\nSucessor: %d\n\n",num-1,num+1);
	system("pause");
	return 0;
	
	
	
}
