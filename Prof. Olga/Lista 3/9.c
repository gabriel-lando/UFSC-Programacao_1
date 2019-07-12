#include <stdio.h>

int main(){
	const int l=2, c=2;
	int i,j;
	int m[l][c];

	printf("Leitura de dados para a matriz %ix%i:\n", l,c);

	for (i = 0; i < l; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			printf("Digite o elemento [%i][%i] da matriz: ", i,j);
			scanf("%i", &m[i][j]);
		}
	}



	printf("\nMatriz %ix%i:\n\n", l,c);
	for (i = 0; i < l; ++i){
		for (j = 0; j < c; ++j)
			printf("%i   ", m[i][j]);
		printf("\n");
		}

	}