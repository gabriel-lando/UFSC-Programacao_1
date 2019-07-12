#include <stdio.h>
#include <string.h>



/*char Separar(char str[15]){
	char str2[5];
	printf("%s\n", str);
	printf("%i\n", strlen(str));
	for (int i = 0; i < 5; ++i)
		str2[i]=str[i];
	printf("%s\n", str2);
	printf("%i\n", strlen(str2));
	return str2;
}
*/
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

	//fscanf(txt, "%s %lf", a, &x);

	//printf("%c\n", a[6]);

	//teste = fgets(b, 12, txt);

	//printf("%s\n", b);

	/*g = 1;

	while (!feof(txt))
	{
		// Lê uma linha (inclusive com o '\n')
		teste = fgets(b, 100, txt);  // o 'fgets' lê até 99 caracteres ou até o '\n'
		if (teste)  // Se foi possível ler
			printf("Linha %d : %s",g,b);
		g++;
	}
*/

	/*while (!feof(txt))
	{
		
		teste = fscanf(txt, "%s %lf", a, &x);
		if (teste)  // Se foi possível ler
			printf("Linha %d : %s = %lf a[6]=%c\n",g,a,x,a[6]);
		g++;
	}*/

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