#include <stdio.h>
#include <math.h>

int Scan(){
	int s;
	scanf("%i", &s);
	return s;
}

int Inverter(int n){
	int a = n;

	printf("\nNumero invertido: ");

	while (a>0){
		printf("%i", a%10);
		a=(int)a/10;
	}

	printf("\n");


}

int main(){
	int a;

	printf("Entre com um numero inteiro: ");
	a = Scan();
	
	Inverter(a);

}