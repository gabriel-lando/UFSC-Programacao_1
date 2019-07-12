#include <stdio.h>


int main ()
{

	int x, fat=1;

	printf("Entre um valor: ");
	scanf("%d", &x);

	if (x>=0){
		while (x>0){
			fat=fat*x;
			--x;
		}
		printf("%d\n", fat);
	}
	else
		printf("Numero invalido\n");

	return 0;
}