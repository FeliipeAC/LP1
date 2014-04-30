#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int num, num_inv;
	
	printf("Digite um numero de 3 digitos: ");
	scanf("%d",&num);
	num_inv= (((num%10)*100) + (((num/10)%10)*10) + ((num/10)/10));
	printf("\nNumero invertido: %d\n\n",num_inv);
	system("pause");
	return 0;
	
}
