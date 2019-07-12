#include <stdio.h>

int main(){
	int x = 6;
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
}