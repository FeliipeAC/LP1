#include <stdio.h>
#include <stdlib.h>

float Soma(float soma_consu,float consu_mes){
	
	soma_consu=soma_consu + consu_mes;
	
	return (soma_consu);
}

float Menor(float consu_mes, float consu_mes_maior, float consu_mes_menor){
	
	if (consu_mes >= consu_mes_maior)
		consu_mes_maior=consu_mes;
	if (consu_mes <= consu_mes_menor)
		consu_mes_menor=consu_mes;
return (consu_mes_menor);
}

float Maior(float consu_mes, float consu_mes_maior, float consu_mes_menor){
	
	if (consu_mes >= consu_mes_maior)
		consu_mes_maior=consu_mes;
	if (consu_mes <= consu_mes_menor)
		consu_mes_menor=consu_mes;
return (consu_mes_maior);
}

			
int Media (int conti,float soma_consu, float media_consu){
	media_consu=soma_consu/conti;
	return media_consu;
}

int main ()
{
	int n_hab, cat, resp= 1,cont=0, i;
	float valor_kwh, cons_mes, soma_cons=0, cons_mes_maior, cons_mes_menor;
	float  cons_cat1=0, cons_cat2 = 0,cons_cat3= 0, media_cons;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	printf("Numero de habitantes da cidade: ");
	scanf("%d",&n_hab);
	printf("Valor do KwH: ");
	scanf("%f",&valor_kwh);
	soma_cons=0;
	printf("Consumo do mes: ");	
	scanf("%f",&cons_mes);
	cons_mes_maior=cons_mes_menor=cons_mes;
	while (resp != 2){
		soma_cons=Soma(soma_cons,cons_mes);
		cons_mes_maior=Maior(cons_mes,cons_mes_maior,cons_mes_menor);
		cons_mes_menor=Menor(cons_mes,cons_mes_maior,cons_mes_menor);
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
	media_cons=Media(cont,soma_cons,media_cons);
	system("cls");
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	for (i=0; i<56; i++)
	printf("%c",205);	
	printf("\n\t* Maior consumo_____%.2f\n\t* Menor consumo_____%.2f\n\t* Media do consumo__%.2f ",cons_mes_maior,cons_mes_menor,media_cons);
	printf("\n\t* Consumo das categorias:  \n\t  - Residencial_____%.2f  \n\t  - Comercial_______%.2f  \n\t  - Industrial______%.2f\n",cons_cat1,cons_cat2,cons_cat3);
	for (i=0; i<56; i++)
	printf("%c",205);
	printf("\n\n");
	system("pause");
	return 0;
	
}
