#include <stdio.h>
#include <stdlib.h>

char Carros(char carros[][15]){
	int i;
	printf("Nome dos 5 carros : ");
	for (i=0; i<5; i++)
		scanf("%s",&carros[i]);
	return carros[i][15];
	
}

float Consumo (float consumo[], char carros[][15]){
	int i;
	system("cls");
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	printf("Forneca o consumo para os respectivos carros: ");
	for (i=0; i<5; i++){
		printf("\nCarro: %s",carros[i]);
		printf("\nConsumo: ");
		scanf("%f",&consumo[i]);
	}
	return consumo[i];
}

void Resultado(char carros[][15], float consumo[], float maior_cons){
	
	int i,j,k;
	system("cls");
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	maior_cons=consumo[0];
	for (i=1; i<5; i++){
		if (consumo[i] > maior_cons){
			maior_cons=consumo[i];
			j=1;
		}
	}
	printf("\nCarro mais economico: %s - %.2f Km/L",carros[j],maior_cons);
	printf("\n\nCombustivel gasto para 1000Km percorridos: ");
	for (k=0; k<5; k++){
		printf("\n %s\t ->\t %.2f L",carros[k],1000/consumo[k]);
	}
		
}

int main ()
{
	char carros[5][15];
	float consumo[5],maior_cons;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade %cº\n\n",184);
	carros[5][15]=Carros(carros);
	consumo[5]=Consumo(consumo,carros);
	Resultado(carros,consumo,maior_cons);
	printf("\n\n");
	system("pause");
	return 0;
}

