#include <stdio.h>

int Fib(int f){
	if (f==0)
		return 0;
	else if (f==1)
		return 1;
	else{
		return (Fib(f-1)+Fib(f-2));
	}
}

int main(){
	int a;
	scanf("%i", &a);
	printf("%i\n", Fib(a));
}