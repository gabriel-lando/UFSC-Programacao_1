#include <stdio.h>



int main ()
{

	int s=0;

	for (int i = -10; i <= 20; ++i)
	{
		if (i%5==0)
		s=s+i;
	}
	printf("Soma: %d\n", s);

	return 0;
}