#include <stdio.h>

int main (){

	int x=0, b=0, soma=0,a=0;
	float media=0;

	while (x!=-666){
		printf("Entre com um numero inteiro positivo: ");
		scanf("%d",&x);

		if (x >= 0 && x%2==0){
			a++;
			soma=soma+x;
		}
		else if (x==-666){

		}
		else
			b++;

	}
	if (a>0){
		media = (float) soma/a;
		printf("\n\nMedia dos pares positivos: %.3f\n", media);
	}
	
	printf("Quantidade de tentativas de digitar dados invalidos: %d\n", b);
	
}
