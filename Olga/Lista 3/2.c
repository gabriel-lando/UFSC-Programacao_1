#include <stdio.h>

int main(){
	int c[15]={11, 22, 33, 44, 55, 66, 77};
	int i;
	
	printf("Elemento          Valor\n");
	for (i = 0; i < 15; ++i)
		printf("%d                  %d\n", i, c[i]);
}