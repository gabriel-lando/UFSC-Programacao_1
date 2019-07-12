#include <stdio.h>
#include <string.h>

struct Livro
{
	char nome[50];
	char autor[50];
	int id;
	float preco;
};

int main()
{
	int id;
	float preco, menor_preco;
	char nome[20], autor[20];
	struct Livro vet[10];

	for (int i = 0; i < 10; ++i)
		printf("%i %i %i %i\n", &vet[i].nome, &vet[i].autor, &vet[i].id, &vet[i].preco);

	
	return 0;
}