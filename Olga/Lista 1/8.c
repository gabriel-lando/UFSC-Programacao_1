#include <stdio.h>



int main ()
{

	int n=0,x=0;
	float s=0;

	while (n!=666){
		printf("Digite um numero negativo: ");
		scanf("%d", &n);
		if (n<0){
			s=s+n;
			++x;

		}
		else if (n==666){
			break;
		}
		else{
			printf("\nNumero invalido\n\n");
		}
		
	}
	if (x>0)
		printf("\n\nMedia: %.2f\n", s/x);

	return 0;
}
