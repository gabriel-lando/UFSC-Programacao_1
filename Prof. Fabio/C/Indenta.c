#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char *remove_espacos(char *s)
{
	while ((*s != 0) && ((*s == '\t') || (*s == ' '))) s++;

	return s;

}

void indenta (const char *origem, const char *destino)
{
	FILE *entrada, *saida;
	entrada = fopen(origem, "r");
	saida = fopen(destino, "w");

	char linha [200];

	if (entrada == NULL || saida == NULL)
	{
		printf("Erro com os arquivos\n");
		exit(1);
	}

	int tab = 0;
	char *limpa;
	char linhasaida[200];

	while (1)
	{
		if (fgets(linha, 200, entrada) == NULL) break;

		if (strchr(linha, '}') != NULL) tab--;

		limpa = remove_espacos(linha);

		strcpy(linhasaida, "");
		for (int i = 0; i < tab; ++i)
			strcat(linhasaida, "\t");
		strcat(linhasaida, limpa);

		if (strchr(linha, '{') != NULL) tab++;

		fputs(linhasaida, saida);
	}

	fclose(entrada);
	fclose(saida);

}

int main(int argc, char const *argv[])
{
	if (argc != 3){
		printf("Error\n");
		exit(1);
	}

	indenta(argv[1], argv[2]);


	return 0;
}