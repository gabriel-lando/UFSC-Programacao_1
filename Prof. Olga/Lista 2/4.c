#include <stdio.h>

int main (){

	int t=0,b=0,r=0, x=0, soma=0,a=0;
	float media1=0, media2=0, media3=0;

	while (x!=-666){
		printf("\nMENU\n");
		printf("1) Vinho Tinto\n");
		printf("2) Vinho Branco\n");
		printf("3) Vinho Rose\n");
		scanf("%d",&x);
		if (x==1){
			printf("\nEntre com a quantidade de vinho tinto: ");
			scanf("%d", &t);
		}
		else if (x==2){
			printf("\nEntre com a quantidade de vinho branco: ");
			scanf("%d", &b);
		}
		else if (x==3){
			printf("\nEntre com a quantidade de vinho rose: ");
			scanf("%d", &r);
		}
		else if (x==-666){}
		else{
			printf("Entre com um numero valido!\n");
		}

	}
	soma = t + b + r;
	if (soma>0){
		media1 = t*100/soma;
		media2 = b*100/soma;
		media3 = r*100/soma;
		printf("\n\nVinho tinto: %.2f%%\nVinho branco: %.2f%%\nVinho rose: %.2f%%\n", media1, media2, media3);
	}
}
