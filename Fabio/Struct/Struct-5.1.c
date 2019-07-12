#include <stdio.h>
#include <string.h>

typedef struct
{
	char nome[10];
	char end[20];
}Livro;

int main()
{
	Livro x[100];
	printf("O tamanho de x eh %lu\n", sizeof(x));

}