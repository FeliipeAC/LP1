#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float peso, altura, imc;
	
	printf("Peso: ");
	scanf("%f",&peso);
	printf("Altura: ");
	scanf("%f",&altura);
	imc=peso/(altura*altura);
	printf("\nIMC\t� Classificacao       �");
	printf("\n-------------------------------");
	printf("\n%.2f",imc);
	if (imc < 18.5)
		printf("\t� Abaixo do peso!     �\n\n");
	if (imc > 18.6 & imc <25)
		printf("\t� Saudavel!           �\n\n");
	if (imc >=25 & imc < 30)
		printf("\t� Peso em excesso!    �\n\n");
	if (imc >= 30 & imc < 35)
		printf("\t� Obesidade Grau I!   �\n\n");
	if (imc >=35 & imc < 40)
		printf("\t� Obesidade Grau II!  �\n\n");
	if (imc >=40)
		printf("\t� Obesidade Grau III! �\n\n");
	
	system("pause");
	return 0;		
							
	

}

