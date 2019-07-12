#include <stdio.h>

typedef struct
{
	int teste;
}x;

int main()
{
	x ola;
	scanf("%i", &ola.teste);
	int num = 5;

	if (ola.teste == num)
		printf("OK\n");
	else 
		printf("OK32\n");

	return 0;
}