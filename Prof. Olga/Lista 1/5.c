#include <stdio.h>



int main ()
{

	int c;

	c=5;
	printf("Pos Incremento:\n");
	printf("C=%d\n", c);
	printf("C++=%d\n", c++);
	printf("C=%d\n", c);

	c=5;
	printf("\nPre-incremento:\n");
	printf("C=%d\n", c);
	printf("++C=%d\n", ++c);
	printf("C=%d\n", c);


	return 0;
}