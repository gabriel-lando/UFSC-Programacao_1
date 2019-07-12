#include <stdio.h>

int Scan(){
	int s;
	scanf("%i", &s);
	return s;
}


int Area(int l){
	return l*l;
}

int Perimetro(int l){
	return 4*l;
}

int main(){
	int lado;

	printf("Entre com o lado do quadrado:\n");
	lado = Scan();

	printf("\nArea: %i\n", Area(lado));
	printf("Perimetro: %i\n", Perimetro(lado));

}