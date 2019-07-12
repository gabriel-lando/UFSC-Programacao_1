#include <stdio.h>

int Scan(){
	int s;
	scanf("%i", &s);
	return s;
}


int Maior(int x, int y, int z){
	if (x>=y){
		if (x>=z)
			return x;
		else
			return z;
	}
	else{
		if (y>=z)
			return y;
		else
			return z;
	}
}


int Menor(int x, int y, int z){
	if (x<=y){
		if (x<=z)
			return x;
		else
			return z;
	}
	else{
		if (y<=z)
			return y;
		else
			return z;
	}
}

int main(){
	int a, b, c;

	printf("Entre com 3 valores:\n");
	a = Scan();
	b = Scan();
	c = Scan();


	printf("\nMenor: %i\n", Menor(a,b,c));
	printf("Maior: %i\n", Maior(a,b,c));

}