#include <stdio.h>

int main(){
	int soma=0,a,b;
	long int c;
	
	printf("Digite um numero: ");
	scanf("%d", &a);

	c=10000000000000000;

	while (c!=0){
		soma = a/c + soma;
		b=a/c;
		a= a-(b*c);
		c= c/10;
	}

	printf("%d\n", soma);
}