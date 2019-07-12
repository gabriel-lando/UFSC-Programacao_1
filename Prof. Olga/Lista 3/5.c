#include <stdio.h>

int main(){
	int x = 6, soma=0;
	int c[x];
	int i;
	
	for (i = 0; i < x; ++i)
	{
		printf("Digite elemento %d do vetor: ", i);
		scanf("%d", &c[i]);
	}

	printf("\nElemento          Valor\n");
	for (i = 0; i < x; ++i)
		printf("%d                  %d\n", i, c[i]);

	for (i = 0; i < x; ++i)
	{
		soma = soma + c[i];
	}

	printf("\nSoma: %d\n", soma);
}