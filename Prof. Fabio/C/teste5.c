#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

uint64_t x[1000]={0};

uint64_t fib(uint64_t a){
	if (a == 0 || a == 1) return 1;
	else{
		if (x[a]== 0){
			x[a] = fib (a-1)+ fib(a-2);
			return x[a];
		}
		else return x[a];
	}
}

int main()
{
	for (uint64_t i = 0; i <= 1000; ++i){
		//printf("%ld = %ld\n",i, fib(i));
		printf("%ld = ",i);
		printf("%" PRIu64 "\n", fib(i));
	}

	printf("\n\n\n");
	return 0;
}