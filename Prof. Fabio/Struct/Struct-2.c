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
	float preco;
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


	printf("\nMotra todos os elementos na tela:\n");
	for (int i = 0; i < 4; ++i)
		printf("Nome=%s\nAutor=%s\nId=%i\nPreço=%.2f\n\n", vet[i].nome, vet[i].autor, vet[i].id, vet[i].preco);


	return 0;
}