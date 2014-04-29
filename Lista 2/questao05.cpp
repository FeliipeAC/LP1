#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float premio=780000;
	printf("PREMIO = R$ %.2f\n",premio);
	printf("\n1 º ganhador = R$ %.2f\n2 º ganhador = R$ %.2f\n3 º ganahdor = R$ %.2f\n\n",premio*0.46,premio*0.32,premio*0.22);
	system("pause");
	return 0;
	
	
}
