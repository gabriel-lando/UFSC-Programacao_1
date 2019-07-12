#include <stdio.h>
#include <math.h>

int Scan(){
	float s;
	scanf("%f", &s);
	return s;
}

int Menu(){
	int m;
	printf("\n\n");
	printf("    MENU:\n");
	printf("1) Adiçao\n");
	printf("2) Subtraçao\n");
	printf("3) Multiplicaçao\n");
	printf("4) Divisao\n");
	printf("\n\n Escolha uma opçao: ");

	m = Scan();

	if (m > 0 && m< 5)
		return m;
	else{
		printf("\nValor invalido! Entre com um valor entre 1 e 4!");
		Menu();
	}

}
	
float Adicao(float a, float b){
	return a+b;
}

float Subtracao(float a, float b){
	return a-b;
}

float Multiplicacao(float a, float b){
	return a*b;
}

float Divisao(float a, float b){
	if (b!=0)
		return a/b;

}

int main(){
	float a, b, r, div=0;
	int m;

	printf("Entre com 2 valores:\n");
	a = Scan();
	b = Scan();

	m = Menu();

	switch (m){
		case 1:
			r = Adicao(a,b);
			break;
		case 2: 
			r = Subtracao(a,b);
			break;
		case 3:
			r = Multiplicacao(a,b);
			break;
		case 4:
			if (b!=0)
				r = Divisao(a,b);
			else
				div =1;
			break;
	}

	if (div!=1)
		printf("\nResultado= %.2f\n", r);
	else
		printf("\nNAO EXISTE DIVISAO POR ZERO!!!\n");

}