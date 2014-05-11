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
#include <conio.c>

int Soma (int soma_n, int n){
	soma_n=soma_n + n;
	return soma_n;
}

float Media(float soma_n,int conti,float media_n){
	media_n=soma_n/conti;
	return media_n;
}

int Menor (int n, int n_maior, int n_menor){
	if (n >= n_maior)
		n_maior=n;
	if (n <= n_menor)
		n_menor=n;
	return (n_menor);	
}	

int Maior (int n, int n_maior, int n_menor){
	if (n >= n_maior)
		n_maior=n;
	if (n <= n_menor)
		n_menor=n;
	return (n_maior);
}

float Soma_par (float soma_p, int n){
	soma_p+=n;
	return (soma_p);
}

int main ()
{
	int soma_num=0, soma_par=0, num, cont=0, cont_par=0, num_maior, num_menor, i;
	float media_num, media_par;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	printf("Digite um numero: ");
	scanf("%d",&num);
	num_maior=num_menor=num;
	while (num != 0){
		cont++;
		soma_num=Soma(soma_num,num);
		num_maior=Maior(num,num_maior,num_menor);
		num_menor=Menor(num,num_maior,num_menor);
		if (num%2 == 0){
			soma_par=Soma_par(soma_par,num);
			cont_par++;
		}
		printf("Digite um numero: ");
		scanf("%d",&num);		
	}
	media_num = (float)soma_num/cont;
	media_par = (float)soma_par/cont_par;	
	printf("\n");
	for (i=0; i<56; i++)
	printf("%c",205);
	printf("\n\tSoma dos numeros digitados: %d \n\tQuantidade de numeros digitados: %d \n\tA media dos numeros digitados: %.2f",soma_num,cont,media_num);
	printf("\n\tO maior numero digitado: %d \n\tO menor numero digitado: %d \n\tA media dos numeros pares: %.2f\n",num_maior,num_menor,media_par);
	for (i=0; i<56; i++)
	printf("%c",205);
	printf("\n\n");
	system("pause");
	return 0;
}

