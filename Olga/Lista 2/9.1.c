#include <stdio.h>

int main(){
	int soma=0,a;
	
	printf("Digite um numero: ");
	scanf("%d", &a);

	while (a!=0){
		soma = a%10 + soma;
		a= a/10;
	}

	printf("%d\n", soma);
}