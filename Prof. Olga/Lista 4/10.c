#include <stdio.h>

int main(){
	int m[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int det=0;
	int i, j;
	
	printf("Entre com os elementos da Matriz 3x3:\n");
	for (i = 0; i < 3; ++i)
		for (j = 0; j < 3; ++j)
		{
			printf("%dx%d: ", i,j);
			scanf("%d", &m[i][j]);
		}

	det = (m[0][0]*m[1][1]*m[2][2] + m[0][1]*m[1][2]*m[2][0] + m[0][2]*m[1][0]*m[2][1]) - (m[0][2]*m[1][1]*m[2][0] + m[0][1]*m[1][0]*m[2][2] + m[0][0]*m[1][2]*m[2][1]);

	printf("Determinante: %d\n", det);



}