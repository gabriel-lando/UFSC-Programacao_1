#include <stdio.h>

int main(){
	int a,b,c, soma=0;
	scanf("%d %d %d", &a, &b, &c);
	if (a>=1){
		if (b<c){
			for (int i = b; i <= c; ++i)
			{
				if (i%a==0){
					soma = soma + i;
				}
			}
		}
		else{
			for (int i = c; i <= b; ++i)
			{
				if (i%a==0){
					soma = soma + i;
				}
			}
		}
		printf("Soma: %d\n", soma);
	}


}

