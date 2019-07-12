#include <stdio.h>



int main ()
{

	int x=1, y=0;
	float s=0;

	do
	{
		printf("Entre com um numero: ");
		scanf("%d", &y);
		s=s+y;
		x++;

	} while (x<=5);

	printf("%.1f\n", s/5);


	return 0;
}