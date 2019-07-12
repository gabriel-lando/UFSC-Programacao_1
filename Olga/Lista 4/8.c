#include <stdio.h>

int main(){
	int m[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int maximo=0, posi=0, posj=0;
	int i, j;

	printf("Entre com os elementos da Matriz 4x4:\n");
	for (i = 0; i < 4; ++i)
		for (j = 0; j < 4; ++j)
		{
			printf("%dx%d: ", i,j);
			scanf("%d", &m[i][j]);
		}

	maximo = m[0][0];

	for (i = 0; i < 4; ++i)
		for (j = 0; j < 4; ++j)
		{
			if (m[i][j] > maximo){
				maximo = m[i][j];
				posi=i;
				posj=j;
			}
		}

	printf("\n");
	for (i = 0; i < 4; ++i){
		for (j = 0; j < 4; ++j)
			printf("%d  ", m[i][j]);
		printf("\n");
	}

	printf("\nElemento maximo: [%i][%i] %d\n",posi, posj, maximo);

}
