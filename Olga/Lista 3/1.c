#include <stdio.h>

int main(){
	int c[10];
	int i;
	for (i = 0; i < 10; ++i)
	{
		c[i]=5;
	}

	printf("Elemento          Valor\n");
	for (i = 0; i < 10; ++i)
		printf("%d                  %d\n", i, c[i]);
}