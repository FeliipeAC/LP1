#include <stdio.h>
#include <conio.h>

int main () 
{
	int soma_num=0, soma_par=0, num, cont=0, cont_par=0, num_maior, num_menor;
	float media_num, media_par;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	num_maior=num_menor=num;
	
	while (num != 0)
	{
		soma_num+= num;
		cont++;
		if (num >= num_maior)
			num_maior=num;
		if (num <= num_menor)
			num_menor=num;
		
		if ((num % 2) == 0)
		{
			cont_par++;
			soma_par+=num;
		}
		printf("Digite um numero: ");
		scanf("%d",&num);	
	}
	media_num = (float)soma_num/cont;
	media_par = (float)soma_par/cont_par;
	printf("\n----------------------------------------------");
	printf("\nSoma dos numeros digitados: %d \nQuantidade de numeros digitados: %d \nA media dos numeros digitados: %.2f",soma_num,cont,media_num);
	printf("\nO maior numero digitado: %d \nO menor numero digitado: %d \nA media dos numeros pares: %.2f",num_maior,num_menor,media_par);
	printf("\n----------------------------------------------");
	return 0;
	
}
