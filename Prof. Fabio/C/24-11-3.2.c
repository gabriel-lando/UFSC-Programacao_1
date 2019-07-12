#include <stdio.h>
void inverte (int *v, int tam)
{
	int tmp;
	int *aux;
	aux = v + tam -1;

	int vezes = tam/2;

	for (int i = 0; i < vezes; ++i)
	{
		tmp = *v;
		*v = *aux;
		*aux = tmp;
		v++;
		aux--;
	}
	
}

int main (void)
{
	int x;
	int vet[]={0,-90,234,23,9,-232,-9,34,56,78,1,34,9090,45,67,2,-123,987,4,6,789,23};
	printf("Original:\n"); for (x=0;x<22;x++) printf("%d ",vet[x]);
	printf("\n");

	inverte(vet,22);
	printf("Invertido:\n"); for (x=0;x<22;x++) printf("%d ",vet[x]);
	printf("\n");

	return 0;
}