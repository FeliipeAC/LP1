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


float Media (int conti,float soma_consu, float media_consu){
	media_consu=soma_consu/conti;
	return media_consu;
}

int Ler_categoria (int cate){
	printf("Categoria: ");
	printf("\n1 - Residencial\n2 - Comercial\n3 - Industrial\n");
	scanf("%d",&cate);
	return cate;	
}

float Categoria1 (int cate, float consu_cate1, float consu_mes ){
	
	if (cate == 1)
		consu_cate1=consu_cate1 + consu_mes;
	return consu_cate1;	
}

float Categoria2 (int cate, float consu_cate2, float consu_mes ){
	
	if (cate == 2)
		consu_cate2=consu_cate2 + consu_mes;
	return consu_cate2;	
}

float Categoria3 (int cate, float consu_cate3, float consu_mes ){
	
	if (cate == 3)
		consu_cate3=consu_cate3 + consu_mes;
	return consu_cate3;	
}

int Numero_hab (int num_hab){
	printf("Numero de habitantes da cidade: ");
	scanf("%d",&num_hab);
	return num_hab;
}

int Valor_Kwh (int v_kwh){
	printf("Valor do KwH: ");
	scanf("%f",&v_kwh);
	return v_kwh;
}

float Consumo_mes (float consu_mes){
	printf("Consumo do mes: ");	
	scanf("%f",&consu_mes);
	return consu_mes;	
}

void Resultado(float cons_mes_maior, float cons_mes_menor, float media_cons, float cons_cat1,float cons_cat2,float cons_cat3){
	int i;
	system("cls");
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	for (i=0; i<56; i++)
	printf("%c",205);	
	printf("\n\t* Maior consumo:\t%.2f\n\t* Menor consumo:\t%.2f\n\t* Media do consumo:\t%.2f ",cons_mes_maior,cons_mes_menor,media_cons);
	printf("\n\t* Consumo das categorias: \n\t - Residencial:\t%.2f \n\t - Comercial:\t%.2f \n\t - Industrial:\t%.2f\n",cons_cat1,cons_cat2,cons_cat3);
	for (i=0; i<56; i++)
	printf("%c",205);
	printf("\n\n");
	system("pause");
	return;
}

int main ()
{
	int n_hab, cat, resp= 1,cont=0, i;
	float valor_kwh, cons_mes, soma_cons=0, cons_mes_maior, cons_mes_menor;
	float cons_cat1=0, cons_cat2 = 0,cons_cat3= 0, media_cons;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	n_hab=Numero_hab(n_hab);
	valor_kwh=Valor_Kwh(valor_kwh);
	soma_cons=0;
	cons_mes=Consumo_mes(cons_mes);
	cons_mes_maior=cons_mes_menor=cons_mes;
	while (resp != 2){
		soma_cons=Soma(soma_cons,cons_mes);
		cons_mes_maior=Maior(cons_mes,cons_mes_maior,cons_mes_menor);
		cons_mes_menor=Menor(cons_mes,cons_mes_maior,cons_mes_menor);
		cont=cont + 1;
		cat=Ler_categoria(cat);
		cons_cat1=Categoria1(cat,cons_cat1,cons_mes);	
		cons_cat2=Categoria2(cat,cons_cat2,cons_mes);
		cons_cat3=Categoria3(cat,cons_cat3,cons_mes);
		printf("Outro habitante (1 - sim / 2 - Nao): ");
		scanf("%d",&resp);	
		if (resp == 1)	
			cons_mes=Consumo_mes(cons_mes);	
	}
	media_cons=Media(cont,soma_cons,media_cons);
	Resultado(cons_mes_maior,cons_mes_menor,media_cons,cons_cat1,cons_cat2,cons_cat3);
}

