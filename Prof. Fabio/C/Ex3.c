#include <stdio.h>
#include <string.h>

int meu_strlen (char vet[]){
	char *pt;
	pt = vet;

	while (*pt != 0)
		pt++;

	printf("\nQtde de caracteres: %d\n\n", (pt - vet));
}

int main()
{
	char vet[100];
	printf("Entre com uma palavra: ");
	scanf("%s", vet);
	meu_strlen(vet);

	return 0;
}