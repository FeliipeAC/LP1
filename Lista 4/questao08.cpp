#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char Ler_A (char a[]){
	printf("String 1: ");
	gets(a);
	return a[30];
}

char Ler_B(char b[]){
	printf("String 2: ");
	gets(b);
	return b[30];
}

void Ocorrencia (char A[],char B[],int tam_a, int tam_b){
	int cont=0, i=0, j=0;
	while (j<tam_b){
    	if (A[i] == B[j]){
    		if (i == tam_a-1){
    			cont++;
    			i=0;
    			j++;
    		}
    		else{
				j++;
    			i++;
    		}
    	}
    	else if (A[i] != B[j]){
    		j++;
    		i=0;
    	}
    		
    }
    printf("\n\"%s\" aparece %d vez(es) em \"%s\"\n\n",A,cont,B);	
}

int main()
  {
    char A[30], B[30];
    int i=0, j=0, tam_a, tam_b, cont=0;
	printf("\t\t\t\t\t\tºPor: Felipe Andrade%c º\n",184);
	A[30]=Ler_A(A);
    B[30]=Ler_B(B);
	tam_a=strlen(A);
    tam_b=strlen(B);
	Ocorrencia(A,B,tam_a,tam_b);
	system("pause");
	return 0;
  }
