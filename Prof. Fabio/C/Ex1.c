#include <stdio.h>
#include <string.h>

int main()
{
	int vet1[4]={4,5,3,1};
	int vet2[4]={3,11,7,2};
	int vet3[8]={0};

	int *p1, *p2, *p3;

	p1 = vet1;
	p2 = vet2;
	p3 = vet3;

	for (int i = 0; i < 4; ++i)
	{
		*p3++ = *p1++;
		*p3++ = *p2++;
	}

	for (int i = 0; i < 8; ++i)
		printf("%i ", vet3[i]);

	printf("\n");

	return 0;
}