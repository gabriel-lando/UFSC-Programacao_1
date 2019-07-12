#include <stdio.h>

int main(){
	int a[5], b[5], c[10];
	int x=0, y=0, i;


	printf("Entre com os valores pro vetor A: \n");
	for (i = 0; i < 5; ++i)
		scanf("%i", &a[i]);
	printf("\n");

	printf("Entre com os valores pro vetor B: \n");
	for (i = 0; i < 5; ++i)
		scanf("%i", &b[i]);

	
	for (i = 0; i < 10; ++i){
		if (i % 2 == 0){
			c[i]=a[i/2];
			c[i+1]=b[i/2];
		}
	}

	printf("\n");

	printf("Vetor A: ");
	for (i = 0; i < 5; ++i)
		printf("%d  ", a[i]);
	printf("\n");
	
	printf("Vetor B: ");
	for (i = 0; i < 5; ++i)
		printf("%d  ", b[i]);
	printf("\n");
	
	printf("Vetor C: ");
	for (i = 0; i < 10; ++i)
		printf("%d  ", c[i]);
	printf("\n");
	

}