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

	for (int i = 0; i < 4; ++i)
	{
		printf("Entre com o nome, autor, id e preço: ");
		scanf("%s %s %d %f", nome, autor, &id, &preco);

		vet[i].id = id;
		vet[i].preco = preco;
		strcpy(vet[i].nome, nome);
		strcpy(vet[i].autor, autor);
	}


	menor_preco = vet[0].preco;
	id = 0;

	for (int i = 1; i < 4; ++i)
		if (vet[i].preco < menor_preco){
			menor_preco = vet[i].preco;
			id = i;
		}

	printf("O livro mais barato esta na posiçao %i e o preço eh %.2f\n", id, menor_preco);

	return 0;
}