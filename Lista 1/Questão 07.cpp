#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1, n2, soma;
	
	printf("Digite dois numeros: ");
	scanf("%d %d", &n1, &n2);
	soma=n1+n2;
	printf("\nA soma dos numeros %d e %d eh igual a: %d", n1, n2, soma);

	return 0;
}
