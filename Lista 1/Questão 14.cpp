#include <stdio.h>

int main ()
{
	float c;
	printf("Digite a temperatura em celsius: ");
	scanf("%f",&c);
	printf("Conversao: %.2f C ---> %.2f F",c,32+(1.8*c));
	return 0;

}
