#include <stdio.h>

int main(){
	int a,c;
	float b=0.015, s=1000;

	printf("Digite um ano: ");
	scanf("%d", &a);

	c=a-2006;

	while (c>=0){
		s=s*(b+1.00);
		b=b*2.00;
		--c;
	}

	printf("%.2f\n", s);
}