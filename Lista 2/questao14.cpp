#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int hora_c, hora_s, min_c, min_s;
	int hora_t, min_t;
	float preco;
	
	printf("Chegada: ");
	printf("\nHora: ");
	scanf("%d",&hora_c);
	printf("Minuto: ");
	scanf("%d",&min_c);
	printf("\nSaida: ");
	printf("\nHora: ");
	scanf("%d",&hora_s);
	printf("Minuto: ");
	scanf("%d",&min_s);
	
	if (hora_s > hora_c){
		hora_t=hora_s - hora_c;
		if ((min_c>0) & (min_s>0))
			hora_t++;
		if ((hora_t>=1) & (hora_t<=2))
			preco=hora_t*1;
		if ((hora_t>=3) & (hora_t<=4))
			preco=hora_t*1.4;
		if (hora_t>=5)
			preco=hora_t*2;
					
	}
	if (hora_s < hora_c){
		hora_t=(24-hora_c) + hora_s;
		if ((min_s>0) || (min_c > 0))
			hora_t++;
		if ((hora_t>=1) & (hora_t<=2))
			preco=hora_t*1;
		if ((hora_t>=3) & (hora_t<=4))
			preco=hora_t*1.4;
		if (hora_t>=5)
			preco=hora_t*2;	
		
	}
	
	printf("\nPreco a pagar = R$ %.2f\n\n",preco);
	
	system("pause");
	return 0;

}

