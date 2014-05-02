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
	printf("\nIMC\tº Classificacao       º");
	printf("\n-------------------------------");
	printf("\n%.2f",imc);
	if (imc < 18.5)
		printf("\tº Abaixo do peso!     º\n\n");
	if (imc > 18.6 & imc <25)
		printf("\tº Saudavel!           º\n\n");
	if (imc >=25 & imc < 30)
		printf("\tº Peso em excesso!    º\n\n");
	if (imc >= 30 & imc < 35)
		printf("\tº Obesidade Grau I!   º\n\n");
	if (imc >=35 & imc < 40)
		printf("\tº Obesidade Grau II!  º\n\n");
	if (imc >=40)
		printf("\tº Obesidade Grau III! º\n\n");
	
	system("pause");
	return 0;		
							
	

}

