#include <stdio.h>
#include <stdlib.h>

void Le_notas (float *n1, float *n2){
	printf("\nDigite as duas notas: \n");
	scanf("%f%f",&*n1,&*n2);
}

void Calc_media (float *n1, float *n2, float *med_s, float *med_p){
	*med_s= (*n1 + *n2)/2;
	*med_p= (*n1 + *n2*2)/3;
}

void Exibe_dados (float *med_s, float *med_p){
	printf("\nMedia simples: %.2f\nMedia ponderada: %.2f",*med_s,*med_p);
}

int main (){
	float nota1, nota2, media_simp, media_pond;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	Le_notas(&nota1,&nota2);
	Calc_media(&nota1,&nota2,&media_simp,&media_pond);
	Exibe_dados(&media_simp,&media_pond);
	printf("\n\n");
	system("pause");
	return 0;
}

