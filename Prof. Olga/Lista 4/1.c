#include <stdio.h>

int main(){
	int v[15];
	int maior, m, menor, mm, i;

	printf("Entre com os valores pro vetor: \n");
	for (i = 0; i < 15; ++i)
		scanf("%i", &v[i]);

	maior = v[0];
	m = 0;
	menor = v[0];
	mm = 0;

	for (i = 1; i < 15; ++i)
	{
		if (v[i]>maior)
		{
			maior = v[i];
			m=i;
		}
		else if (v[i]<menor)
		{
			menor = v[i];
			mm = i;
		}
	}

	printf("\n\nPosiçao do maior valor:%i\nMaior valor: %i\nPosiçao do menor valor: %i\nMenor valor: %i\n", m, maior, mm, menor);

}