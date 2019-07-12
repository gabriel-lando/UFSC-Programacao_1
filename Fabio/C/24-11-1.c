#include <stdio.h>

void maior_menor(int *inicio, int *fim, int *maior, int *menor){
	int *tmp = inicio;
	int maior_tmp = *inicio;
	int menor_tmp = *inicio;

	while (1)
	{
		if (maior_tmp < *tmp)
			maior_tmp = *tmp;
		else if (menor_tmp > *tmp)
			menor_tmp = *tmp;
		if (tmp == fim)
			break;
		tmp++;
	}

	*maior = maior_tmp;
	*menor = menor_tmp;

}


int main (void)
{
	int maior, menor; int vet[]={0,-90,234,23,9,-232,-9,34,56,78,1,34,9090,45,67,2,-123,987,4,6,789,23};
	maior_menor (&vet[0], &vet[21],&maior, &menor);

	printf("Maior = %d\tMenor = %d\n", maior, menor);

	return 0;
}