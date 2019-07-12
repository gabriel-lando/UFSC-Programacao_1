#include <stdlib.h>
#include <stdio.h>
#define TAM 20

int main (void) {
	int *vetor1; int *vetor2; int x;

	vetor1 = (int *) malloc (TAM*sizeof(int));

	for (x=0;x<TAM;x++)
		vetor1[x]=x;

	free(vetor1);

	vetor1 = (int *) malloc (TAM*sizeof(int));

	for (x=0;x<TAM;x++)
		printf("Vetor 1[%d]=%d\n",x,vetor1[x]);

	printf("\n\n\n\n");


	vetor2 = (int *) calloc (TAM,sizeof(int));
	
	for (x=0;x<TAM;x++)
		vetor2[x]=x;

	free(vetor2);

	vetor2 = (int *) calloc (TAM,sizeof(int));

	for (x=0;x<TAM;x++)
		printf("Vetor 2[%d]=%d\n",x,vetor2[x]);

	printf("\n\n\n\n");
	return 0;

}
