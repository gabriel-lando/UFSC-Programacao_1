#include <stdio.h>

int main (){

	int x=0, maior=0, menor=-1,soma=0,a=0;

	while (x!=-666){
		printf("Entre com um numero inteiro: ");
		scanf("%d",&x);

		if (x >= 0){
			a++;
			if (x>maior)
				maior=x;
			if (menor==-1)
				menor=x;
			else if (menor>x)
					menor=x;
			if (x%2==0)
				soma=soma+x;
		}

	}
	if (a>0){
	printf("\n\nMenor valor: %d\n", menor);
	printf("Maior valor: %d\n", maior);
	printf("Soma dos números pares: %d\n", soma);
	}
	
}
