#include <stdio.h>

int main(){
	int m[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int pares=0;
	int i, j;

	for (i = 0; i < 3; ++i)
		for (j = 0; j < 3; ++j)
		{
			if (m[i][j] %2 == 0)
				pares = pares + m[i][j];
		}

	for (i = 0; i < 3; ++i){
		for (j = 0; j < 3; ++j)
			printf("%d  ", m[i][j]);
		printf("\n");
	}

	printf("\nSoma dos elementos pares: %d\n", pares);

}