#include <stdio.h>
#include <stdlib.h>

int Frac(float num, int *inteiro, float *frac){
	*inteiro=(int)num;
	*frac=num-int(num);
	return 0;
}

int main (){
	float num, frac;
	int inteiro;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);	
	printf("Digite um numero real: ");
	scanf("%f",&num);
	Frac(num,&inteiro,&frac);
	printf("\nParte interia: %d\nParte fracionaria: %.2f\n\n",inteiro,frac);
	system("pause");
	return 0;
}

