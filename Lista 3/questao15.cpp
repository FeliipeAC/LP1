#include <Stdio.h>

int main () 
{
	int soma=0, i;
	
	for (i=0; i < 10; i++)
	{
		if ((i%3 == 0) | (i%5 == 0))
			soma+=i;
	}
	printf("Soma: %d",soma);
	return 0;
	
	
	
}
