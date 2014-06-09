#include <stdio.h>
#include <stdlib.h>

int main (){
	int *p, i, vetor[]={1,2,3,4,5};
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n\n",184);
	p=vetor;
	for (i=0; i<5; i++)
		p[i]+=1;
	for (i=0; i<5; i++)
		printf("%d",p[i]);
	printf("\n\n");
	system("pause");
	return 0;		
}

