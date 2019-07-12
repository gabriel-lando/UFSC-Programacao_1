#include <stdio.h>

int main(){
	const int size = 8;
	int cand[size];
	int i, v, votos;
	int n = -1;
	float votosval=0;

	printf("Entre com a qtde de votos: ");
	scanf("%i", &votos);

	printf("\nApuraçao de votos\n");
	for (i = 0; i < size; ++i)
		cand[i]=0;

	for (i = 0; i < votos; ++i)
	{
		printf("\nEscolha o candidato 1..7: ");
		scanf("%i", &v);
		if (v>= 0 && v<=7)
			cand[v]++;
		else 
			cand[0]++;
	}

	

	printf("\n\nCandidato      Votos\n");
	for (i = 1; i < size; ++i)
		printf("   %i             %i\n", i, cand[i]);

	printf("Votos nulos: %i\n", cand[0]);	

	for (i = 1; i < size; ++i)
		votosval= cand[i] + votosval;
	
	printf("\n\n%% de votos validos:\n");
	printf("Candidatos        %%\n");
	for (i = 1; i < size; ++i)
		printf("   %i             %.2f\n", i, (float)cand[i]*100/votosval);

	printf("%% de votos nulos do total de votos: %.2f\n", (float)cand[0]*100/votos);

	}