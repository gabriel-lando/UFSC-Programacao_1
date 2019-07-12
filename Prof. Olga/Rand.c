#include <stdio.h> //Biblioteca para entrada e saida.
#include <stdlib.h> //Biblioteca para RAND.
#include <time.h> //Biblioteca para usar o Time como Seed.

#define n 1000000 //Quantidade de numeros a ser gerados.
#define vi 1 //Valor inicial da funçao RAND.
#define v 10  //Intervalo dos numeros a ser gerados (VI..(1-(V+VI))).

 

int main(){
	int i;
	int rd[n];
	float media = 0;
	int rep[v] = {0};

	printf("Gerando numeros aleatorios...\n");

		srand(time(NULL)); //Usa a funçao time como seed.

		for ( i = 0; i < n; ++i) //Grava num vetor os numeros que serao gerados.
		{
			rd[i] = vi + rand() % v; //Gera os numeros aleatorios.
			media = media + rd[i]; //Soma na media.
			printf("%i ", rd[i]); //Imprime o numero gerado.
			rep[rd[i]-vi]++; //Realiza a contagem dos numeros.
		}

	media = media/n; //Calcula a media.

	printf("\n\n\n\n");
	
	for ( i = 0; i < v; ++i) //Imprime a qtde de cada numero com sua respectiva porcentagem.
		printf("Numero %i: %i vezes. %.2f%%\n", (i+vi), rep[i], (float)rep[i]*100/n);
	
	printf("\n");

	printf("Media: %.2f\n", media); //Imprime a media

}