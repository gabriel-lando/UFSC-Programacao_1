#include <stdio.h>

int main(){
	int c,p,pato,coelho,a,b;
	printf("Cabeças: ");
	scanf("%d", &c);
	printf("Pes: ");
	scanf("%d", &p);

	a=c*4-p;
	pato=a/2;
	coelho=c-pato;

	printf("\nCoelho: %d\nPato: %d\n", coelho, pato);
}