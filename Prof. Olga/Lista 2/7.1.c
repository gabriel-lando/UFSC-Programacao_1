#include <stdio.h>

int main()
{
	int mes, ano, dia;
	printf("Digite o mes e ano no formato MM/AAAA: ");
	scanf("%d/%d", &mes, &ano);

	if ((ano % 4 == 0 && ano % 100!= 0) || (ano % 400 == 0)){
			printf("%d eh bissexto!\n", ano);
			dia=29;
		} 
		
	else{
		printf("%d nao eh bissexto!\n", ano);
		dia=28;
	}

	if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
		dia=31;
	else if (mes != 2)
		dia=30;

	printf("Mes %d possui %d dias\n", mes, dia);
}