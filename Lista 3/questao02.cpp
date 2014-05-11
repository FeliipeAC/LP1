/*Escreva um program que leia o numero de habitantes de uma determinada
cidade, o valor do kwh, e para cada habitante entre com os seguintes dados:
consumo do mês e o código de consumidor(1-residencial, 2-comercial, 3-industrial).
No final imprima o maior, o menor e a média do consumo dos habitantes; e por
fim o total do consumo de cada categoria de consumidor.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int n_hab, cat, resp= 1,cont=0;
	float valor_kwh, cons_mes, soma_cons=0, cons_mes_maior, cons_mes_menor;
	float  cons_cat1=0, cons_cat2 = 0,cons_cat3= 0;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	printf("Numero de habitantes da cidade: ");
	scanf("%d",&n_hab);
	printf("Valor do KwH: ");
	scanf("%f",&valor_kwh);
	soma_cons=0;
	printf("Consumo do mes: ");	
	scanf("%f",&cons_mes);
	cons_mes_maior=cons_mes_menor=cons_mes;
	
	while (resp != 2)
	{
		
		if (cons_mes >= cons_mes_maior)
			cons_mes_maior=cons_mes;
		if (cons_mes <= cons_mes_menor)
			cons_mes_menor=cons_mes;
		
		soma_cons= soma_cons + cons_mes;
		cont=cont + 1;
		printf("Categoria: ");
		printf("\n1 - Residencial\n2 - Comercial\n3 - Industrial\n");
		scanf("%d",&cat);
		
		if (cat == 1)
			cons_cat1=cons_cat1 + cons_mes;
		if (cat == 2)	
			cons_cat2=cons_cat2 + cons_mes;
		if (cat == 3)
			cons_cat3=cons_cat3 + cons_mes;
		
		printf("Outro habitante (1 - sim / 2 - Nao): ");
		scanf("%d",&resp);	
		if (resp == 1)	
		{
			printf("Consumo do mes: ");	
			scanf("%f",&cons_mes);
		}
	
	}
	
	printf("\n* Maior consumo_____%.2f\n* Menor consumo_____%.2f\n* Media do consumo__%.2f ",cons_mes_maior,cons_mes_menor,soma_cons/cont);
	printf("\n* Consumo das categorias:  \n  - Residencial_____%.2f  \n  - Comercial_______%.2f  \n  - Industrial______%.2f\n\n",cons_cat1,cons_cat2,cons_cat3);
	system("pause");
	return 0;
}
