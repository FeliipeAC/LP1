/*Faça um programa que calcule o maior número palíndromo feito a partir do
produto de dois numeros de 3 digitos. Ex: O maior palíndromo feito a partir
do produto de dois números de dois digítos é 9009= 91*99.*/

#include <stdio.h>
#include <stdlib.h>

int inverte(int produto){
	int aux, num_inv;
	
	aux=produto;
	num_inv=0;
	
	while(aux > 0){
		num_inv = num_inv * 10;
		num_inv = num_inv + (aux % 10);
		aux = aux /10;
	}
return num_inv;
	
}
int main(){

    int i, j, num_inv, produto, palindromo, maior=0;
	num_inv=0;
    printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
    for(i=100; i<=999; i++){
		for(j=100; j<=999; j++){
			produto=(i*j);
			
			num_inv=inverte(produto);
			if(num_inv==produto){
				palindromo=produto;
                if(palindromo>maior)
                     maior=palindromo;
            }
		}
	}
	
	printf("Maior palindromo do protudo de 2 numeros de 3 digitos: %d\n\n", palindromo);
	system("pause");
    return 0;
}
