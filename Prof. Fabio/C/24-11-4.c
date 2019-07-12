#include <stdio.h>
#include <stdlib.h>

void converte (int n, int b)
{
	int r = n/b;
	int resto = n%b;
	if (r != 0)
		(converte(r,b));
	if (b == 16){
		if (resto >= 10 && resto <= 15)
			printf("%c", 'A'+resto-10);
		else
			printf("%d", resto);
	}
	else
		printf("%d", resto);

}
int main (int argc, char const *argv[])
{
	if (argc != 3){
		int n, b;
		printf("Entre com o numero e a base:\n");
		scanf("%d %d", &n, &b);

		printf("Resultado da mudanca de base: ");
		converte (n, b);
		printf("\n");
	}
	else{
		printf("Resultado da mudanca de base: ");
		converte (atoi(argv[1]), atoi(argv[2]));
		printf("\n");
	}
	return 0;
}