#include <stdio.h>
#include <stdlib.h>

int soma ()
	{
		int x, y;
		printf("\nDigite os 2 numeros: \n");
		scanf("%d%d",&x,&y);
		printf("\nSoma = %d\n\n",x+y);	
		system("pause");
		return 0;	
	}

int diferenca()
	{
		int x, y;
		printf("\nDigite os 2 numeros: \n");
		scanf("%d%d",&x,&y);
		if (x > y)
			printf("\nDiferenca = %d\n\n",x-y);
		else
			printf("\nDiferenca = %d\n\n",y-x);
		system("pause");
		return 0;		
		
	}

int produto()
	{
		int x, y;
		printf("\nDigite os 2 numeros: \n");
		scanf("%d%d",&x,&y);
		printf("\nProduto = %d\n\n",x*y);
		system("pause");
		return 0;
	}

int divisao()
	{
		//considerando a divisao do primeiro numero digitado pelo segundo
		float x, y;
		printf("\nDigite os 2 numeros: \n");
		scanf("%d%d",&x,&y);
		if ((x != 0) & (y != 0))
			printf("\nDivisao = %.1f\n\n",x/y);
		if (y == 0)
			printf("\nDivisao por 0\n\n");
		if (x == 0)
			printf("\nDivisao = 0\n\n");
		system("pause");
		return 0;		
		
	}


int main ()
{
	int op;
	
	printf("=========== MENU ===========");
	printf("\n1. Soma de 2 numeros");
	printf("\n2. Diferena entre 2 numeros");
	printf("\n3. Produto entre 2 numeros");
	printf("\n4. Divisão entre 2 numeros");
	printf("\n\nOpcao: ");
	scanf("%d",&op);
	
	if ((op>=1) & (op<=4))
	{
		if (op == 1)
			soma();
		if (op == 2)	
			diferenca();
		if (op == 3)
			produto();
		if (op == 4)
			divisao();
						
	}
	else 	
		printf("\nNumero invalido!");
	
	return 0;
	
	
}
