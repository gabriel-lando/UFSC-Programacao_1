#include <stdio.h>
#include <string.h>

int main()
{
	int vet1[8]={-2,5,-6,4,8,-1,-9,7};
	int vetp[8]={0};
	int vetn[8]={0};

	int *p1, *pp, *pn;

	p1 = vet1;
	pp = vetp;
	pn = vetn;

	for (int i = 0; i < 8; ++i)
	{	
		if (*p1 >= 0)
			*pp++ = *p1++;
		else
			*pn++ = *p1++;
	}

	for (int i = 0; i < (pp-vetp); ++i)
		printf("%i ", vetp[i]);

	printf("\n");

	for (int i = 0; i < (pn-vetn); ++i)
		printf("%i ", vetn[i]);

	printf("\n");

	return 0;
}