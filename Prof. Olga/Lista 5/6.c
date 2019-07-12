#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 100 //Quantidade de numeros gerados
#define v 10  //Intervalo dos numeros gerados (1..X)

int main(){

	int rd[n];
	float media = 0;
	int rep[v] = {0};
	int i, j;

	printf("Gerando numeros aleatorios...\n");

		srand(time(NULL));

		for (i = 0; i < n; ++i)
		{
			rd[i] = 1 + rand() % v;
			media = media + rd[i];
			printf("%i ", rd[i]);
		}

	printf("\n\n\n");

/*	for (int i = 0; i < n; ++i)
		printf("%i ", rd[i]);
*/

	media = media/n;



	for (i = 0; i < n; ++i)
		for (j = 0; j < v; ++j)
				if (rd[i] == (j+1))
					rep[j]++;
	

	printf("\n\n");
	
	for (i = 0; i < v; ++i)
		printf("Numero %i: %i vezes. %.2f%%\n", (i+1), rep[i], (float)rep[i]*100/n);
	
	printf("\n");

	printf("Media: %.2f\n", media);

}