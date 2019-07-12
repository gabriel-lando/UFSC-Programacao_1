#include <stdio.h>

int main(){
	float v[10];
	int i;

	float media=0;

	printf("Entre com os valores pro vetor: \n");
	for (i = 0; i < 10; ++i)
		scanf("%f", &v[i]);

	
	for (i = 1; i < 10; ++i)
		media = media + v[i];
	
	media = media/10;

	printf("\n");
	
	for (i = 0; i < 10; ++i)
		if (v[i]>media)
			printf("Posiçao: %i    Valor%.2f\n", i, v[i]);


}