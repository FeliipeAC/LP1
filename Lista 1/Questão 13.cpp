#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float fah;
	printf("Digite a temperatura en Fahrenheit(32 - 212): ");
	scanf("%f",&fah);
	printf("Conversao: \n");
	printf("%.2f F ---> %.2f C",fah,5*(fah-32)/9);
	return 0;
}
