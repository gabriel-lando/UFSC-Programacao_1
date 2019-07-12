#include <stdio.h>

typedef struct
{
	char nome[10];
	int cpf;
	int idade;
	
}meu_tipo;

int main()
{
	meu_tipo vet[10];
	meu_tipo *ptr;

	ptr = vet;
	ptr += 8;

	printf("%s\n", ptr->nome);

	/*void *ptr2;
	ptr2 = (void *)vet;
	ptr2 = ptr2 + 8*sizeof(meu_tipo);

	printf("%s\n", (char *)ptr2->nome);
*/
	return 0;
}