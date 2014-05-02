#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    int i, resp[5], pergunta[5][2], certa=0;
    srand( (unsigned)time(NULL) );
	
    for (i=0; i<5; i++){
		printf("Pergunta %d:  %d + %d: ",i+1,pergunta[i][0]=rand()%100, pergunta[i][1]=rand()%100);
		scanf("%d",&resp[i]);
		if (resp[i] == (pergunta[i][0] + pergunta[i][1]))
			certa++;	
	}
	system("cls");
	printf("Pergunta   º Reposta º Correta");
	printf("\n---------------------------------");
	for (i=0; i<5; i++){
		printf("\nPergunta %d      %d       %d",i+1,pergunta[i][0] + pergunta[i][1],resp[i]);
	}
	printf("\n---------------------------------");
	printf("\n\nAcertos = %d\n\n",certa);
	
	system("pause");
	return 0;	
}
