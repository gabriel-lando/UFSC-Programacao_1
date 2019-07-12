#include <stdio.h>

int main(){
	const int size = 6;
	int cand[size];
	int i, v;
	int n = -1;


	printf("\nApuraçao de votos\n");
	for (i = 0; i < size; ++i)
		cand[i]=0;

	for (i = 0; i < 7; ++i)
	{
		printf("\nEscolha o candidato 1..5: ");
		scanf("%i", &v);
		if (v>= 0 && v<=5)
			cand[v]++;
		else 
			cand[0]++;
	}

	printf("\n\nCandidato      Votos\n");
	for (i = 1; i < size; ++i)
		printf("   %i             %i\n", i, cand[i]);
	
	printf("Votos nulos: %i\n", cand[0]);	
	}