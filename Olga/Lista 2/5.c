#include <stdio.h>
int x_point, x_c, y_c, y_point, R;
float formula;

float Formula(){
	return ((x_point - x_c)*(x_point - x_c) + (y_point - y_c)*(y_point - y_c));
}

int main(){

	printf("Entre com as coordenadas do ponto: ");
	scanf("%d;%d", &x_point, &y_point);
	printf("Entre com as coordenadas do centro: ");
	scanf("%d;%d", &x_c, &y_c);
	printf("Entre com o valor do raio: ");
	scanf("%d", &R);

	if (Formula() <= R*R)
		printf("Dentro\n");
	
	else
		printf("Fora\n");


}

