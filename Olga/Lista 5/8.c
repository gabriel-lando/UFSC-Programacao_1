#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Menu(){
	int m;
	system("clear");
	printf("\n\n");
	printf("    NIVEL:\n");
	printf("1) Easy (0 ou 1 - 1 chance)\n");
	printf("2) Medium (1 a 10 - 3 chances)\n");
	printf("3) Hard (1 a 50 - 5 chances)\n");
	printf("4) Expert (1 a 100 - 5 chances)\n");
	printf("\n\nEscolha uma opçao: ");

	scanf("%i", &m);
	system("clear");

	if (m > 0 && m< 5)
		return m;
	else{
		printf("\nValor invalido! Entre com um valor entre 1 e 4!\n\n\n");
		Menu();
	}

}


void Easy(){
	int v;
	int n;

	srand(time(NULL));

	n = 0 + rand() % 2;

	printf("Entre com um numero 0 ou 1: ");
	scanf("%i", &v);
	if (v == n){
		system("clear");
		printf("\nAcertou!!\n\n\n");
	}
	else{
		system("clear");
		printf("\nErrou!\nO valor correto era %i!\n\n\n", n);
	}

}

void Medium(){
	int c = 2, ok=0;
	int v;
	int n;

	srand(time(NULL));

	n = 1 + rand() % 10;

	while (c >= 0 && ok != 1){
	
		printf("Entre com um numero de 1 ate 10: ");
		scanf("%i", &v);
	
		if (v == n && c >= 0){
			system("clear");
			printf("\nAcertou!!\n\n\n");
			ok = 1;
		}
		else if (v != n && c > 0){
			system("clear");
			printf("\nErrou! Tente novamente!\nVoce ainda tem %i chances!\n", c);
			if (v > n)
				printf("Seu numero eh MAIOR.\n\n\n");
			else
				printf("Seu numero eh MENOR.\n\n\n");
			--c;
		}
		else{
			system("clear");
			printf("\nErrou! Suas chances acabaram!\nO valor correto era %i!\n\n\n", n);
			--c;
		}
	}
	
}

void Hard(){
	int c = 4, ok=0;
	int v;
	int n;

	srand(time(NULL));

	n = 1 + rand() % 50;

	while (c >= 0 && ok != 1){
	
		printf("Entre com um numero de 1 ate 50: ");
		scanf("%i", &v);
	
		if (v == n && c >= 0){
			system("clear");
			printf("\nAcertou!!\n\n\n");
			ok = 1;
		}
		else if (v != n && c > 0){
			system("clear");
			printf("\nErrou! Tente novamente!\nVoce ainda tem %i chances!\n", c);
			if (v > n)
				printf("Seu numero eh MAIOR.\n\n\n");
			else
				printf("Seu numero eh MENOR.\n\n\n");
			--c;
		}
		else{
			system("clear");
			printf("\nErrou! Suas chances acabaram!\nO valor correto era %i!\n\n\n", n);
			--c;
		}
	}
}

void Expert(){
	int c = 4, ok=0;
	int v;
	int n;

	srand(time(NULL));

	n = 1 + rand() % 100;

	while (c >= 0 && ok != 1){
	
		printf("Entre com um numero de 1 ate 100: ");
		scanf("%i", &v);
	
		if (v == n && c >= 0){
			system("clear");
			printf("\nAcertou!!\n\n\n");
			ok = 1;
		}
		else if (v != n && c > 0){
			system("clear");
			printf("\nErrou! Tente novamente!\nVoce ainda tem %i chances!\n", c);
			if (v > n)
				printf("Seu numero eh MAIOR.\n\n\n");
			else
				printf("Seu numero eh MENOR.\n\n\n");
			--c;
		}
		else{
			system("clear");
			printf("\nErrou! Suas chances acabaram!\nO valor correto era %i!\n\n\n", n);
			--c;
		}
	}
}


int main(){
	int m;

	m = Menu();
	printf("\n");

	switch (m){
		case 1:
			Easy();
			break;
		case 2: 
			Medium();
			break;
		case 3:
			Hard();
			break;
		case 4:
			Expert();
			break;
	}

}
