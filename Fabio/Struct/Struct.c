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
	int x, y, z;
	struct Livro meu_livro;

	meu_livro.id = 123;
	strcpy(meu_livro.nome, "Programando em C");
	strcpy(meu_livro.autor, "Sr. Prof");
	meu_livro.preco = 23.75;

	printf("O nome do livro eh %s\n", meu_livro.nome);

	return 0;
}