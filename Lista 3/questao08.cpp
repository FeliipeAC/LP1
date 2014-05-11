/*Faça um programa que receba vários numeros, calcule e mostre:
(a) a soma dos numeros digitados
(b) a quantidade de numeros digitados
(c) a media dos numeros digitados
(d) o maior numero digitado
(e) o menor numero digitado
(f) a media dos numeros pares*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main () 
{
	int soma_num=0, soma_par=0, num, cont=0, cont_par=0, num_maior, num_menor;
	float media_num, media_par;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
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
	printf("\n----------------------------------------------\n\n");
	system("pause");
	return 0;
	
}
