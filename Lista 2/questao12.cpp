#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int geometrica(){
	float media;
	int x, y, z;
	system("cls");	
	printf("Digite 3 numeros: \n");
	scanf("%d%d%d",&x,&y,&z);
	media=cbrt(x*y*z);
	printf("\nMedia geometrica = %.2f\n\n", media);
	
	return 0;
	}

int ponderada(){
	float media;
	int x, y, z;
		system("cls");
		printf("Digite 3 numeros: \n");
		scanf("%d%d%d",&x,&y,&z);	
		media=float(x + 2*y + 3*z)/6;
		printf("\nMedia ponderada = %.2f\n\n",media);
		
		return 0;
}

int harmonica(){
	float media;
	int x, y, z;
	system("cls");
	printf("Digite 3 numeros: \n");
	scanf("%d%d%d",&x,&y,&z);	
	media=1/x + 1/y + 1/z;
	printf("\nMedia harmonica = %.2f\n\n",1/media);
	
	return 0;
}		

int aritmetica(){
	int media;
	int x, y, z;
	system("cls");
	printf("Digite 3 numeros: \n");
	scanf("%d%d%d",&x,&y,&z);	
	media=(x+y+z)/3;
	printf("\nMedia aritmetica = %d\n\n",media);
	
	return 0;
}



int main ()
{
	int op;
	
	printf("     MEDIA: ");
	printf("\n\n 1. Geometrica");
	printf("\n 2. Ponderada");
	printf("\n 3. Harmonica");
	printf("\n 4. Aritmetica");
	printf("\n\n Opcao: ");
	scanf("%d",&op);
	if (op == 1)
		geometrica();
	if (op == 2)
		ponderada();
	if (op == 3)
		harmonica();
	if (op == 4)
		aritmetica();
	system("pause");
	return 0;

}

