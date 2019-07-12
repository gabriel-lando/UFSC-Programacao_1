#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double perimetro(const char *file){

	int x[20]={0}, y[20]={0}, xr = 0 ,yr = 0;
	double per = 0;
	int count = 0;
	
	FILE *txt;

	txt = fopen(file, "r");

	if (txt == NULL)
	{
		printf("Nao foi possivel abrir o arquivo\n");
		exit(1);
	}


	while (count > -1){
		if (fscanf(txt, "%d,%d", &xr, &yr) == EOF) break;

		printf("[%d,%d]\n", xr, yr);
		x[count] = xr;
		y[count] = yr;
		count++;
	}

	if (count > 0){
		for (int i = 1; i <= count; ++i)
			per = per + sqrt((x[i] - x[i-1])*(x[i] - x[i-1]) + (y[i] - y[i-1])*(y[i] - y[i-1]));
		per = per + sqrt((x[0] - x[count])*(x[0] - x[count]) + (y[0] - y[count])*(y[0] - y[count]));
	}

	return per;

}

int main(int argc, char const *argv[])
{
	if (argc != 2){
		printf("Error\n");
		exit(1);
	}

	printf("Perimetro = %f\n", perimetro (argv[1]));

	return 0;
}