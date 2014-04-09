#include <stdio.h>

int main ()
{
	float alt, peso, p_ideal;
	char sexo[1];
	
	printf("Digite sua altura: ");
	scanf("%f",&alt);
	printf("Sexo(M/F): ");
	getchar();
	scanf("%c",&sexo);
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	printf("\n");
	if ((sexo[0]=='M') || (sexo[0]=='m'))
		{
			p_ideal=(72.7*alt)-58;
			printf("Peso ideal: %.2f Kg",p_ideal);		
		}
	if ((sexo[0]=='F')	|| (sexo[0]=='f'))
		{
			p_ideal=(62.1*alt)-44.7;
			printf("Peso ideal: %.2f Kg",p_ideal);		
		}

	return 0;
		
}
