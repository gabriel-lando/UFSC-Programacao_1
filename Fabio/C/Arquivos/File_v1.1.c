#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	double w_e_o[2][3]={0};
	double w_o_o[4][3]={0};
	double w_o_s[4][2]={0};

	double x;
	char a[15];
	FILE *txt;
	int l, m;

	txt = fopen("sinapses.txt", "r");

	fscanf(txt, "%s %lf", a, &x);

	do{
		l = atoi(&a[6]);
		m = atoi(&a[9]);
		
		w_e_o[l][m] = x;

		fscanf(txt, "%s %lf", a, &x);
	}while (!feof(txt) && a[2]=='e' && a[4]=='o');


	do{
		l = atoi(&a[6]);
		m = atoi(&a[9]);

		w_o_o[l][m] = x;

		fscanf(txt, "%s %lf", a, &x);
	}while (!feof(txt) && a[2]=='o' && a[4]=='o');

	do{
		l = atoi(&a[6]);
		m = atoi(&a[9]);

		w_o_s[l][m] = x;

		fscanf(txt, "%s %lf", a, &x);
	}while (!feof(txt) && a[2]=='o' && a[4]=='s');



	for (int i = 0; i < 2; ++i){
		for (int j = 0; j < 3; ++j)
			printf("%lf ", w_e_o[i][j]);
		printf("\n");
	}

	printf("\n\n");

		for (int i = 0; i < 4; ++i){
		for (int j = 0; j < 3; ++j)
			printf("%lf ", w_o_o[i][j]);
		printf("\n");
	}

	printf("\n\n");

		for (int i = 0; i < 4; ++i){
		for (int j = 0; j < 2; ++j)
			printf("%lf ", w_o_s[i][j]);
		printf("\n");
	}

	printf("\n\n");


	return 0;
}