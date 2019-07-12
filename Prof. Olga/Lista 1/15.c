#include <stdio.h>



int main ()
{
	int n, rep=0, med=0,x;
	float media=0;

	for (int i = 1; i <=15; ++i)
	{
		printf("Nota do aluno %d:", i);
		scanf("%d", &n);

		if (n>=6 && n<=10)
		{
			printf("Aprovado\n\n");
			med=med+n;
			x++;

		}

		else if (n>=0 && n<6){
			printf("Reprovado\n\n");
			rep++;
		}
		else{
			printf("Nota invalida\n\n");
			--i;
		}
	}
	if (x>0){
		media=med/x;
		printf("\n\nMedia dos aprovados: %.3f\n", media);
	}
	printf("Reprovados: %d\n", rep);

	return 0;
}
