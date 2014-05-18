/*Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui*/

#include <stdio.h>
#include <stdlib.h>

void Valores_pares(){
	int vetor[10], i, cont=0;
	printf("Digite dez numeros: ");
	
	for (i=0; i < 10; i++)
		{
			scanf("%d",&vetor[i]);
			if (vetor[i]%2 == 0)
				cont++;
		}
	printf("\nQuantidade de valores pares: %d\n",cont);
	
}

int main ()
{
	printf("\t\t\t\t\t\tºPor: Felipe Andrade%c º\n\n",184);
	Valores_pares();
	system("pause");
	return 0;
	
}
