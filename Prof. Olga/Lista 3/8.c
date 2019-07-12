#include <stdio.h>

int main(){
	int i,j;
	int m[2][2]={{1,2},{3,4}};

	printf("Imprimir a matriz 2x2 com os valores definidos:\n");
	for (i = 0; i < 2; ++i){
		for (j = 0; j < 2; ++j)
			printf("%i   ", m[i][j]);
		printf("\n");
		}

	}