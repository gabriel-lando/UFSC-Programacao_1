#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int n=0;

int Contar(uint64_t a){
	

	if (a > 0){
		Contar(a/10);
		n++;
	}
	return n;
}

int main(){
	uint64_t x;
	scanf("%d", &x);
	printf("%d\n", Contar(x));
}