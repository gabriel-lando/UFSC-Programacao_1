#include <stdio.h>
int num;

int main ()
{
	printf("Entre com um numero\n");
	scanf("%d", & num);
	printf("\n");
	
	while (num <= 16)
	{
		printf("X = %d\nX*X = %d\n\n", num, num*num );
		num = num+1;
	}

	return 0;
}