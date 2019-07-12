#include <stdio.h>



int main ()
{

	int x=1;
	printf("WHILE com incremento no corpo:\n");
	while (x<=10)
	{
		printf("%d\n", x);
		x++;
	}

	int y=10;
	printf("\nWHILE com decremento na condiçao:\n");
	while (y-->0)
	{
		printf("%d\n", y);
	}


	return 0;
}