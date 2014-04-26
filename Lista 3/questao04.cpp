#include <stdio.h>

int main ()
{
	int i, mult;
	printf("Os cincos primeiros multiplos de 3 sao: ");
	for (i=0;i<5;i++)
		{
			mult=3*i;
			printf("%d ",mult);
		}
	return 0;
}
