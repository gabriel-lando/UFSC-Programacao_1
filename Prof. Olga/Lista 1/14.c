#include <stdio.h>



int main ()
{

	int x;

	
	printf("Entre com um numero: ");
	scanf("%d", &x);


	for (int i = 0; i <= x; ++i)
	{
		if (i%2==0 && i%3==0)
			printf("%d\n", i);
	}

	return 0;
}