#include <stdio.h>

int main(){
	float m[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	float b[3][3], c[3][3];
	float media = 0;
	int g=2,l=2;
	int i, j;

	printf("Entre com os elementos da Matriz 3x3:\n");
	for (i = 0; i < 3; ++i)
		for (j = 0; j < 3; ++j)
		{
			printf("%dx%d: ", i,j);
			scanf("%f", &m[i][j]);
		}

	for (i = 0; i < 3; ++i)
		for (j = 0; j < 3; ++j)
			media= m[i][j] + media;

	media = media/9;

	for (i = 0; i < 3; ++i)
		for (j = 0; j < 3; ++j){
			if (m[i][j] > media)
				b[i][j] = m[i][j];
			else
				b[i][j] = 0;

		}

	for (i = 0; i < 3; ++i){
		l=2;
		for (j = 0; j < 3; ++j)
		{
			c[i][j] = m[g][l];
			--l;
		}
		--g;
	}


	printf("\n\nMatriz A:\n");
	for (i = 0; i < 3; ++i){
		for (j = 0; j < 3; ++j)
			printf("%.2f  ", m[i][j]);
		printf("\n");
	}

	printf("\n\nMatriz B:\n");
	for (i = 0; i < 3; ++i){
		for (j = 0; j < 3; ++j)
			printf("%.2f  ", b[i][j]);
		printf("\n");
	}

	printf("\n\nMatriz C:\n");
	for (i = 0; i < 3; ++i){
		for (j = 0; j < 3; ++j)
			printf("%.2f  ", c[i][j]);
		printf("\n");
	}


}