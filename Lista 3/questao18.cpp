#include <stdio.h>
#include <stdlib.h>

int main ()
{
	long int i, j, num=1, cont=0; 
	
	printf("Calculando o menor numero divisivel por cada um dos numeros de 1 a 20\nAguarde...");
	while (cont != 20)
	{
		++num;
		cont=0;
		for (i=1; i <= 20; i++)
		{
			if (num%i == 0)
				cont++;
				
		}
	
	}
	printf("Resultado = %d\n",num);
	system("pause");
	return 0;	
	
}
