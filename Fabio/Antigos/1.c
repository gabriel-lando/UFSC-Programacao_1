#include <stdio.h>
int idade;

int main ()
{
	printf("Entre com a sua idade\n");
	scanf("%d", & idade);
	if (idade >= 18)
	{
		printf("Eh maior\n");
	}
	else
	{
		printf("Eh menor\n");
	}
}