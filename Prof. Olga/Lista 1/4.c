#include <stdio.h>

int x=0;
int n=1;
int a;
float m;

int main ()
{
	
	while (n>=0)
	{	
		printf("Digite a nota: ");
		scanf("%d", &n);
		if (n>=0){
			m=m+n;
			x++;
		}
		

	}
	printf("\nMedia: %.1f\n", m/x);

	return 0;
}