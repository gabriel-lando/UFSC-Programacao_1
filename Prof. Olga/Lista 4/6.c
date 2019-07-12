#include <stdio.h>

int main(){
	int a[10], b[10];
	int x=0, y=0,r=0,g=0;
	int i, j, k;


	printf("Entre com os valores pro vetor A: \n");
	for (i = 0; i < 10; ++i)
		scanf("%i", &a[i]);
	printf("\n");

	for (j = 0; j < 9; ++j)
	{
		for (i = j+1; i < 10; ++i)
		{
			if (a[j] == a[i]){
				if (r==0){
					b[r] = a[j];
					r++;
				}
				else{
					g=0;
					for (k = 0; k < r; ++k)
						if (a[j] == b[k])
							g=1;
				if (g==0){
					b[r] = a[j];
					r++;
				}

				}
			}
		}	

	}


	printf("\n");

	printf("Vetor A: ");
	for (i = 0; i < 10; ++i)
		printf("%d  ", a[i]);
	printf("\n");
	
	printf("Elementos repetidos em A: ");
	for (i = 0; i < r; ++i)
		printf("%d  ", b[i]);
	printf("\n");
	
	

}