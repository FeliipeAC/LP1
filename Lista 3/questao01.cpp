#include <stdio.h>

int main () {
	int num=0, n_maior, n_menor;
	n_maior = num;
	while (num >= 0){
		printf("Digite um numero inteiro: ");
		scanf("%d",&num);
		if (num >= n_maior)
			n_maior=num;
		if((num < n_menor) && (num > 0)) 
			n_menor=num;	
	}
	printf("Maior numero = %d \nMenor numero = %d",n_maior,n_menor);
return 0;
}

