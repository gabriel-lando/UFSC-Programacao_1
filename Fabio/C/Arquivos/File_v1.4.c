#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	double w_e_o[2][3]={0};
	double w_o_o[4][3]={0};
	double w_o_s[4][2]={0};

	double x;
	char a[5];
	FILE *txt;
	int l, m;

	txt = fopen("sinapses.txt", "r");

	fscanf(txt, "%s[%d][%d]: %lf", a, &l, &m, &x);

	printf("%s %d %d %lf\n", a, l, m, x);

	do{
		//l = atoi(&a[6]);
		//m = atoi(&a[9]);
		
		w_e_o[l][m] = x;

		fscanf(txt, "%s[%d][%d]: %lf", a, &l, &m, &x);
	}while (!feof(txt) && a[2]=='e' && a[4]=='o');


	do{
		//l = atoi(&a[6]);
		//m = atoi(&a[9]);

		w_o_o[l][m] = x;

		fscanf(txt, "%s[%d][%d]: %lf", a, &l, &m, &x);
	}while (!feof(txt) && a[2]=='o' && a[4]=='o');

	do{
		//l = atoi(&a[6]);
		//m = atoi(&a[9]);

		w_o_s[l][m] = x;

		fscanf(txt, "%s[%d][%d]: %lf", a, &l, &m, &x);
	}while (!feof(txt) && a[2]=='o' && a[4]=='s');

	printf("\n");

	printf("double w_e_o[ENTRADAS+1][NR_NEURON_O] = {");
	for (int i = 0; i < 2; ++i){
		printf("{");
		for (int j = 0; j < 3; ++j){
			if (j<2)
				printf("%lf, ", w_e_o[i][j]);
			else
				if (i<1)
					printf("%lf},\n                                        ", w_e_o[i][j]);
				else
					printf("%lf}};\n\n", w_e_o[i][j]);

		}
	}

	printf("double w_o_o[NR_NEURON_O+1][NR_NEURON_O] = {");
	for (int i = 0; i < 4; ++i){
		printf("{");
		for (int j = 0; j < 3; ++j){
			if (j<2)
				printf("%lf, ", w_o_o[i][j]);
			else
				if (i<3)
					printf("%lf},\n                                            ", w_o_o[i][j]);
				else
					printf("%lf}};\n\n", w_o_o[i][j]);

		}
	}

	printf("double w_o_s[NR_NEURON_O+1][SAIDAS] = {");
	for (int i = 0; i < 4; ++i){
		printf("{");
		for (int j = 0; j < 2; ++j){
			if (j<1)
				printf("%lf, ", w_o_s[i][j]);
			else
				if (i<3)
					printf("%lf},\n                                       ", w_o_s[i][j]);
				else
					printf("%lf}};\n\n", w_o_s[i][j]);

		}
	}	

	return 0;
}