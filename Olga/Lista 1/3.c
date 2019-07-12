#include <stdio.h>

int x=1;
int n=1;
float m;

int main ()
{
	while (x<10){
		scanf("%d\n", &n);
		m+=n;
		x++;
	}
	printf("\nMedia: %.1f\n", m/10);

	return 0;
}