#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	double x;
	char a[15];
	FILE *txt;
	int l, m;

	txt = fopen("sinapses.txt", "r");

	fscanf(txt, "%s %lf", a, &x);

	do{
		l = atoi(&a[6]);
		m = atoi(&a[9]);
		printf("%d %d\n\n", l, m);

		fscanf(txt, "%s %lf", a, &x);

	}while (!feof(txt) && a[2]=='e' && a[4]=='o');


	printf("\n\n");

	return 0;
}