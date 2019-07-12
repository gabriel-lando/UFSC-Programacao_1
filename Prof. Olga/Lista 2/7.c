#include <stdio.h>

int main()
{
	int ano;
	printf("Digite um ano: ");
	scanf("%d", &ano);

	if (ano % 4 == 0){
		if (ano % 400 == 0)
			printf("Ano bissexto!\n");
		else if (ano % 100 == 0 )
			printf("Nao eh ano bissexto!\n");
		else 
			printf("Ano bissexto!\n");
	}
	else
		printf("Nao eh ano bissexto!\n");
}