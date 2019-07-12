#define _GNU_SOURCE

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	char nome[50];
	int cpf;
	int idade;
}Registro;

FILE *db;

void DataBase(void)
{
	db = fopen ("DADOS.bin", "r+");
	if (db == NULL){
		db = fopen ("DADOS.bin", "w+");
		if (db == NULL){
			printf("Erro ao criar DB!\n");
			exit(1);
		}
		int count = 00;
		fwrite(&count, sizeof(int), 1, db);
	}
}

int Contador(){
	int count;
	fseek(db, 0L, SEEK_SET);
	fread(&count, sizeof(int), 1, db);
	return count;
}

void Enter(){

	printf("\n\nPressione enter para continuar...");
	char c;
	while ((c = getchar()) != '\n' && c != EOF) { }
	getchar ();
}

int Menu(){
	int m;
	printf("      Menu:\n");
	printf("1) Incluir dados\n");
	printf("2) Pesquisar\n");
	printf("3) Excluir\n");
	printf("4) Mostrar todos\n");
	printf("5) Informaçoes\n");
	printf("6) SAIR\n\n");
	scanf("%d", &m);
	return m;
}

void Incluir(){
	system("cls");

	char tmp[50];
	Registro reg;
	char c;

	while ((c = getchar()) != '\n' && c != EOF) { }

	printf("Ente com o nome: ");
	fgets(reg.nome, 49, stdin);
	reg.nome[strlen(reg.nome)-1] = 0;

	printf("Ente com o CPF: ");
	fgets(tmp,9,stdin);
	reg.cpf = atoi(tmp);

	printf("Ente com a idade: ");
	fgets(tmp,9,stdin);
	reg.idade = atoi(tmp);

	int count = Contador();

	long posicao = sizeof(Registro) * count + sizeof(int);
	fseek(db, posicao, SEEK_SET);
	fwrite(&reg, sizeof(Registro), 1, db);

	count++;
	fseek(db, 0L, SEEK_SET);
	fwrite(&count, sizeof(int), 1, db);

	system("cls");
}

void Pesquisar(){
	system("cls");

	char c, nome[50];
	while ((c = getchar()) != '\n' && c != EOF) { }

	printf("Ente com o nome: ");
	fgets(nome, 49, stdin);
	nome[strlen(nome)-1] = 0;

	int i;

	int count = Contador();

	Registro r;

	printf("\n\n");
	
	for (i = 0; i < count; ++i)
	{
		fread(&r, sizeof(Registro), 1, db);
		if (strstr(r.nome, nome) != NULL)
		{
			printf("[%d] Nome: %30s|CPF: %10d|Idade: %2d\n", i, r.nome, r.cpf, r.idade);
		}
	}

	Enter();
	system("cls");

}

void Excluir(){
	system("cls");

	Registro reg;

	int count = Contador();
	int numero;
	char c;
	while ((c = getchar()) != '\n' && c != EOF) { }

	printf("Entre com o numero do registro para excluir: ");
	scanf("%d", &numero);

	if (numero < count){
		long posicao_escrita = numero * sizeof(Registro) + sizeof(int);
		long posicao_ultimo = (count-1) * sizeof(Registro) + sizeof(int);

		fseek(db, posicao_ultimo, SEEK_SET);
		fread(&reg, sizeof(Registro), 1, db);

		fseek(db, posicao_escrita, SEEK_SET);
		fwrite(&reg, sizeof(Registro), 1, db);

		count--;
		fseek(db, 0L, SEEK_SET);
		fwrite(&count, sizeof(int), 1, db);

	}

	printf("\nRegistro excluido.\n");
	Enter();
	system("cls");



}

void Mostrar(){
	system("cls");

	int count = Contador();

	int i;

	Registro r;

	printf("\n\n");

	for (i = 0; i < count; ++i)
	{
		fread(&r, sizeof(Registro), 1, db);
		printf("\nNome: %30s|CPF: %10d|Idade: %2d\n", r.nome, r.cpf, r.idade);
	}

	Enter();
	system("cls");

}

void Informacoes(){
	system("cls");

	int count;
	fseek(db, 0L, SEEK_SET);
	fread(&count, sizeof(int), 1, db);

	printf("Quantidade de registros: %d\n", count);

	Enter();
	system("cls");

}

int menu(){

	int exit = 0;
	int menu;

	do{
		menu = Menu();
		printf("\n\n\n");
		switch (menu){
			case 1:
				Incluir();
				break;
			case 2: 
				Pesquisar();
				break;
			case 3:
				Excluir();
				break;
			case 4:
				Mostrar();
				break;
			case 5:
				Informacoes();
				break;
			case 6:
				exit = 1;
				system("cls");
				break;
			default:
				system("cls");
				printf("Opçao Inválida!!\n\n");
				break;

		}
	} while (exit != 1);

	return exit;
}

int main(){

	int sair=0;

	DataBase();

	sair = menu();
	if (sair == 1)
		return 0;

	return 0;

}