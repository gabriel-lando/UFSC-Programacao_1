#include <stdio.h>
#include <math.h>

int Scan(){
	float s;
	scanf("%f", &s);
	return s;
}

void Baskara(float a, float b, float c){
	float delta, raiz, r1 ,r2;
	delta = b*b - 4*a*c;
	if (delta < 0)
		printf("\nNao existem raizes reais!\n");
	else if (delta == 0){
		r1 = -b/(2*a);
		printf("\nExiste uma unica raiz real: %.3f\n", r1);
	}
	else{
		raiz = sqrt(delta);
		r1 = (-b+raiz)/(2*a);
		r2 = (-b-raiz)/(2*a);
		printf("\nExiste duas raizes reais: %.3f e %.3f\n", r1, r2); 
	}
}


int main(){
	float a, b, c;

	printf("Entre com os coeficientes A, B e C (Ax² + Bx + C):\n");
	a = Scan();
	b = Scan();
	c = Scan();

	Baskara (a,b,c);

}