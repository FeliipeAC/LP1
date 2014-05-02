#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int idade, tempo;
	
	printf("Idade: ");
	scanf("%d",&idade);
	printf("Tempo de servico: ");
	scanf("%d",&tempo);
	if (idade >= 65)
		printf("\nJa pode se aposentar!\n\n");
	else if (tempo >= 30)
		printf("\nJa pode se aposentar!\n\n");
	else if ((idade >= 60) & (tempo >= 25))
		printf("\nJa pode se aposentar!\n\n");
	else
		printf("\nNao pode se aposentar ainda!\n\n");			
	system("pause");
	return 0;

}

