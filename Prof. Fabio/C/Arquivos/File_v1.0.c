#include <stdio.h>
#include <string.h>

int main(){
	double w_e_o[2][3]={0};
	double w_o_o[4][3]={0};
	double w_o_s[4][2]={0};

	double x;
	char a[15], b[12];
	char *teste;
	FILE *txt;
	int g = 0, l,m,n;

	txt = fopen("sinapses.txt", "r");


	teste = fscanf(txt, "%s %lf", a, &x);

	do{
		if (a[6] == '0')
			l=0;
		else if (a[6] == '1')
			l=1;
		else if (a[6] == '2')
			l=2;
		else if (a[6] == '3')
			l=3;

		if (a[9] == '0')
			m=0;
		else if (a[9] == '1')
			m=1;
		else if (a[9] == '2')
			m=2;
		else if (a[9] == '3')
			m=3;

		
		if (teste){
			w_e_o[l][m] = x;
		}
		g++;
		teste = fscanf(txt, "%s %lf", a, &x);
	}while (!feof(txt) && a[2]=='e' && a[4]=='o');


	do{
		if (a[6] == '0')
			l=0;
		else if (a[6] == '1')
			l=1;
		else if (a[6] == '2')
			l=2;
		else if (a[6] == '3')
			l=3;

		if (a[9] == '0')
			m=0;
		else if (a[9] == '1')
			m=1;
		else if (a[9] == '2')
			m=2;
		else if (a[9] == '3')
			m=3;

		
		if (teste){
			w_o_o[l][m] = x;
		}
		g++;
		teste = fscanf(txt, "%s %lf", a, &x);
	}while (!feof(txt) && a[2]=='o' && a[4]=='o');

	do{
		if (a[6] == '0')
			l=0;
		else if (a[6] == '1')
			l=1;
		else if (a[6] == '2')
			l=2;
		else if (a[6] == '3')
			l=3;

		if (a[9] == '0')
			m=0;
		else if (a[9] == '1')
			m=1;
		else if (a[9] == '2')
			m=2;
		else if (a[9] == '3')
			m=3;

		
		if (teste){
			w_o_s[l][m] = x;
		}
		g++;
		teste = fscanf(txt, "%s %lf", a, &x);
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