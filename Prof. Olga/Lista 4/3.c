#include <stdio.h>

int main(){
	int v[10];
	int i;
	int pares=0, pares2=0;

	printf("Entre com os valores pro vetor: \n");
	for (i = 0; i < 10; ++i)
		scanf("%i", &v[i]);

	
	for (i = 0; i < 10; ++i)
		if (v[i] % 2 == 0)
			pares = pares + v[i];
	for (i = 0; i < 10; ++i)
		if (i % 2 == 0)
			pares2 = pares2 + v[i];



	printf("Soma dos elementos pares: %i\nSoma dos elementos em posiçoes pares: %i\n", pares, pares2);


}