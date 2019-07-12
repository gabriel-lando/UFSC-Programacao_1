#include <stdio.h>

int main(){
	int a[10], b[10], c[10];
	int x=0, y=0;
	int i;

	for (i = 0; i < 10; ++i)
	{
		b[i] =0;
		c[i]=0;
	}


	printf("Entre com os valores pro vetor: \n");
	for (i = 0; i < 10; ++i)
		scanf("%i", &a[i]);

	
	for (i = 0; i < 10; ++i){
		if (a[i] > 0){
			b[x]=a[i];
			x++;
		}
		else if (a[i] < 0){
			c[y]=a[i];
			y++;
		}
	}

	printf("Vetor A: ");
	for (i = 0; i < 10; ++i)
		printf("%d  ", a[i]);
	printf("\n");
	
	printf("Vetor B: ");
	for (i = 0; i < 10; ++i)
		printf("%d  ", b[i]);
	printf("\n");
	
	printf("Vetor C: ");
	for (i = 0; i < 10; ++i)
		printf("%d  ", c[i]);
	printf("\n");
	

}