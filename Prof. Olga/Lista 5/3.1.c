#include <stdio.h>
#include <math.h>

int Scan(){
	float s;
	scanf("%f", &s);
	return s;
}

void Baskara(float a, float b, float c){
	float delta;
	delta = b*b - 4*a*c;
	if (delta < 0)
		printf("\nNao existem raizes reais!\n");
	else if (delta == 0)
		printf("\nExiste uma unica raiz real: %.3f\n", ((float) (-b)/(2*a)));
	else
		printf("\nExiste duas raizes reais: %.3f e %.3f\n", ((-b+sqrt(delta))/(2*a)), ((-b-sqrt(delta))/(2*a))); 
}


int main(){
	float a, b, c;

	printf("Entre com os coeficientes A, B e C (Ax² + Bx + C):\n");
	a = Scan();
	b = Scan();
	c = Scan();

	Baskara (a,b,c);

}