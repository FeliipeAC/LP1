#include <stdio.h>
#include <stdlib.h>

int main (){
	int x=1, *x1;
	float y=2.5, *y1;
	char z='f', *z1;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);	
	x1=&x;
	y1=&y;
	z1=&z;
	printf("Antes:  %d %.2f %c\n",x,y,z);
	*x1=4;
	*y1=5.5;
	*z1='l';
	printf("Depois: %d %.2f %c\n\n",*x1,*y1,*z1);
	system("pause");
	return 0;
}

