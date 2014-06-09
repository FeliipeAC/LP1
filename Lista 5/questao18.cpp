#include <stdio.h>
#include <stdlib.h>

int main (){
	float matriz[3][3];
	int i, j;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);	
	for (i=0; i<3; i++){
		for (j=0; j<3; j++)
			printf("%d   ",&matriz[i][j]);
		printf("\n");	
	}
	printf("\n\n");
	system("pause");
	return 0;	
}

