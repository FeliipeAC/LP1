#include <stdio.h>
#include <stdlib.h>

float ler_notas(float soma=0)
{
	int i;
	float notas[15];
	printf("Digite as 15 notas: ");
	for (i=0; i < 15; i++)
		{
			scanf("%f",&notas[i]);
			soma+=notas[i];
		}
	return soma;
}

float calc_media (float media, float soma)
{
	media=soma/15;
	
	return media;
}
 
int main () 
{
	float media, soma;
	
	soma=ler_notas(soma);
	media=calc_media(media,soma);
	printf("\nMedia geral = %.2f\n",media);
	
	system("pause");
	return 0;	
	
	
	
}
