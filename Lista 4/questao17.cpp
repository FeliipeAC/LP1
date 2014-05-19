#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Resultado (char produto[], float valor){
	printf("Nome do protudo:");
	gets(produto);
	printf("\nValor: ");
	scanf("%f",&valor);
	printf("\nProduto:\t %s\nValor:\t\t R$ %.2f\nDesconto:\t R$ %.2f\nValor a vista:\t R$ %.2f",produto,valor,valor*0.10,valor*0.90);
}

int main ()
{
	char produto[15];
	float valor;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	Resultado(produto,valor);
	printf("\n\n");
	system("pause");
	return 0;

}

