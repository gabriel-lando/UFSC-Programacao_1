#include <stdio.h>

int main(){
	const int m=4, n=2, q=3;
	int a[m][n], b[n][q], c[m][q];
	int i, j, r;

	for (i = 0; i < m; ++i)
		for (j = 0; j < q; ++j)
			c[i][j] = 0;

	
	printf("Entre com os elementos da Matriz A:\n");
	for (i = 0; i < m; ++i)
		for (j = 0; j < n; ++j)
		{
			printf("%dx%d: ", i,j);
			scanf("%d", &a[i][j]);
		}

	printf("\nEntre com os elementos da Matriz B:\n");
	for (i = 0; i < n; ++i)
		for (j = 0; j < q; ++j)
		{
			printf("%dx%d: ", i,j);
			scanf("%d", &b[i][j]);
		}

	
	
		for (i = 0; i < m; ++i)
			for (j = 0; j < q; ++j)
				for (r = 0; r < n; ++r)
					c[i][j] = a[i][r] * b[r][j] + c[i][j];

	printf("\n\nMatriz C:\n");
	for (i = 0; i < m; ++i){
		for (j = 0; j < q; ++j)
			printf("%i  ", c[i][j]);
		printf("\n");
	}

}
