#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void itoa_aux(int num, char * &s) {
	if ( num == 0 ) return ;
	itoa_aux( int(num / 10), s);
	*s++ = n % 10 +'0';
}

void itoa(int num, char *s) {
	if (num < 0) { 
		*s++ ='-';
		n = -n;
	}

	itoa_aux( num , s );
	*s = 0;
}

int main(){
	uint64_t x;
	scanf("%d", &x);
	printf("%d\n", itoa(x));
}