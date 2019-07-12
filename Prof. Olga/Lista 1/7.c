#include <stdio.h>



int main ()
{

	int c=0, s=0;

	while (c<100){

		if (c%2==0){
			++c;
		}
		else {
			s=s+c;
			++c;
		}
	}
	printf("%d\n", s);

	return 0;
}