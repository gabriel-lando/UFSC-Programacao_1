#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void Enter(){
	printf("\n\nAperte ENTER para continuar...\n");
	getchar();
	getchar();
}

int Rand(int inicio, int interv){
	srand(time(NULL));
	return inicio + rand() % interv;
}

int Menu(){
	int m;
	system("clear");
	printf("\n\n");
	printf("    NIVEL:\n");
	printf("1) Easy (0 ou 1 - 1 chance)\n");
	printf("2) Medium (1 a 10 - 3 chances)\n");
	printf("3) Hard (1 a 50 - 5 chances)\n");
	printf("4) Expert (1 a 100 - 5 chances)\n");
	printf("5) SAIR\n");
	printf("\n\nEscolha uma opçao: ");

	scanf("%i", &m);
	system("clear");

	if (m > 0 && m< 6)
		return m;
	else{
		printf("\nValor invalido! Entre com um valor entre 1 e 5!\n");
		Enter();
		Menu();
	}

}


void Easy(){
	int v;
	int n;

	n = Rand (0,2);

	printf("Entre com um numero 0 ou 1: ");
	scanf("%i", &v);
	if (v == n){
		system("clear");
		printf("\nAcertou!!\n");
	}
	else{
		system("clear");
		printf("\nErrou!\nO valor correto era %i!\n", n);
	}

}

void Medium(){
	int c = 2, ok=0;
	int v;
	int n;

	n = Rand (1,10);

	while (c >= 0 && ok != 1){
	
		printf("Entre com um numero de 1 ate 10: ");
		scanf("%i", &v);
	
		if (v == n && c >= 0){
			system("clear");
			printf("\nAcertou!!\n");
			ok = 1;
		}
		else if (v != n && c > 0){
			system("clear");
			printf("\nErrou! Tente novamente!\nVoce ainda tem %i chances!\n", c);
			if (v > n)
				printf("Seu numero eh MAIOR.\n\n");
			else
				printf("Seu numero eh MENOR.\n\n");
			--c;
		}
		else{
			system("clear");
			printf("\nErrou! Suas chances acabaram!\nO valor correto era %i!\n", n);
			--c;
		}
	}
	
}

void Hard(){
	int c = 4, ok=0;
	int v;
	int n;

	n = Rand (1,50);

	while (c >= 0 && ok != 1){
	
		printf("Entre com um numero de 1 ate 50: ");
		scanf("%i", &v);
	
		if (v == n && c >= 0){
			system("clear");
			printf("\nAcertou!!\n");
			ok = 1;
		}
		else if (v != n && c > 0){
			system("clear");
			printf("\nErrou! Tente novamente!\nVoce ainda tem %i chances!\n", c);
			if (v > n)
				printf("Seu numero eh MAIOR.\n\n");
			else
				printf("Seu numero eh MENOR.\n\n");
			--c;
		}
		else{
			system("clear");
			printf("\nErrou! Suas chances acabaram!\nO valor correto era %i!\n", n);
			--c;
		}
	}
}

void Expert(){
	int c = 4, ok=0;
	int v;
	int n;

	n = Rand (1,100);

	while (c >= 0 && ok != 1){
	
		printf("Entre com um numero de 1 ate 100: ");
		scanf("%i", &v);
	
		if (v == n && c >= 0){
			system("clear");
			printf("\nAcertou!!\n");
			ok = 1;
		}
		else if (v != n && c > 0){
			system("clear");
			printf("\nErrou! Tente novamente!\nVoce ainda tem %i chances!\n", c);
			if (v > n)
				printf("Seu numero eh MAIOR.\n\n");
			else
				printf("Seu numero eh MENOR.\n\n");
			--c;
		}
		else{
			system("clear");
			printf("\nErrou! Suas chances acabaram!\nO valor correto era %i!\n", n);
			--c;
		}
	}
}


int main(){
	int m,x=0;

	do{
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
			case 5:
				x=1;
				break;
		}

		if (x != 1)
			Enter();

	} while (x!=1);

}
