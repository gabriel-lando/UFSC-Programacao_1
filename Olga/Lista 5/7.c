#include <stdio.h>

int Contador(){
	static int c = 5;
	if (c >= 0)
		return c--;
	if (c < 0){
		c = 5;
		Contador();
	}

}

int main(){
	int i;
	for (i = 0; i < 100; ++i)
		printf("%i  ", Contador());

	printf("\n");
}