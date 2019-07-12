#include <stdio.h>

int main(){
	int c[5];
	int i;

	for (i = 0; i < 5; ++i)
	{
		printf("Digite elemento %d do vetor: ", i);
		scanf("%d", &c[i]);
	}

	printf("\nElemento          Valor\n");
	for (i = 0; i < 5; ++i)
		printf("%d                  %d\n", i, c[i]);
}