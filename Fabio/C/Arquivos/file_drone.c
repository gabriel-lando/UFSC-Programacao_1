#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define ENTRADAS        1                                                                
#define SAIDAS          2																 
#define NR_AMOSTRAS     5
#define NR_NEURON_O     3
#define CAMADAS_O       2
#define EPOCAS          4000000000 //14:05      //21:18
#define TX_APRENDIZADO  0.7
                                                    //altura/Motor1/Motor2
double cj_treinamento[NR_AMOSTRAS][ENTRADAS+SAIDAS+1] = {
                                                    {0.26, 0.1289, 0.1245},
                                                    {0.35, 0.1278, 0.1256},
                                                    {0.44, 0.1267, 0.1267},
                                                    {0.75, 0.1256, 0.1278},
                                                    {1.06, 0.1245, 0.1289},
                                                                         };

double w_e_o[ENTRADAS+1][NR_NEURON_O];    //sinapses entrada para oculta 1
double w_o_o[NR_NEURON_O+1][NR_NEURON_O]; // sinapses oculta 1 para oculta 2
double w_o_s[NR_NEURON_O+1][SAIDAS];	  // sinapses oculta 2 para saida

double saida_o[NR_NEURON_O][CAMADAS_O];   //saidas das camadas ocultas

double saida_s[SAIDAS];					  //saida final

double delta_saida[SAIDAS];
double gradiente_oculta[NR_NEURON_O][CAMADAS_O]; // gradiente 

double delta_oculta[NR_NEURON_O][CAMADAS_O];  //delta




/*
Cabecalho das funcoes auxiliares
*/
void inicializa_sinapses();
int gera_nr_aleatorios();
void mostrar_sinapses();
double f_sigmoid(double net);
void calcular_saidas(double entradas[ENTRADAS]);
void treinar_RNA();
double calcular_erro(double desejado, double saida);
void menu();
void calcular_delta_saida(double desejado, double desejado2);
void calcular_delta_oculta();
void calcular_delta_oculta2();
void calcular_gradiente_oculta();
void calcular_gradiente_oculta2();
void ajustar_pesos_sinapticos(double entradas[ENTRADAS]);
void salvaSinapses();

/*
Função principal
*/
int main()
{
  srand(time(NULL));

  while (1) {

    menu();

  }

  return 0;
}

void inicializa_sinapses()
{
  int i, j;

  // Inicializa pesos sinapticos da entrada para a camada oculta
  for (i = 0; i < ENTRADAS+1; i++) 
    for (j =0; j < NR_NEURON_O; j++)
      w_e_o[i][j] = gera_nr_aleatorios();
    
  //inicializa pesos sinapticos da camda oculta 1 para camada oculta 2
  for (i = 0; i < NR_NEURON_O+1; i++)
    for (j =0; j < NR_NEURON_O; j++)
        w_o_o[i][j] = gera_nr_aleatorios();

  // Inicializa pesos sinapticos da camada oculta para a saida
  for (i = 0; i < NR_NEURON_O+1; i++) 
    for (j =0; j < SAIDAS; j++) 
      w_o_s[i][j] = gera_nr_aleatorios();
}

int gera_nr_aleatorios()
{
  int numeros[2] = {-1, 1};
  // Retorna -1 ou 1
  return (numeros[rand() % 2]);
}

void mostrar_sinapses()
{
  int i, j;

  // Inicializa pesos sinapticos da entrada para a camada oculta
	for (i = 0; i < ENTRADAS+1; i++) {
		for (j =0; j < NR_NEURON_O; j++) 
		  printf("w_e_o[%d][%d]: %f \n", i, j, w_e_o[i][j]);
		
		printf("\n");
	}

	//mostra pesos sinapticos da 1camada oculata para a 2camada oculta
	for (i = 0; i < NR_NEURON_O+1; i++) {
	    for (j =0; j < NR_NEURON_O; j++) 
			printf("w_o_o[%d][%d]: %f \n", i, j, w_o_o[i][j]);
	
		printf("\n");
	}

  // Inicializa pesos sinapticos da camada oculta para a saida
	for (i = 0; i < NR_NEURON_O+1; i++) {
    	for (j =0; j < SAIDAS; j++) 
      		printf("w_o_s[%d][%d]: %f \n", i, j, w_o_s[i][j]);
   		 
   		printf("\n");
 	}
}

double f_sigmoid(double net){
  return 1 / (1 + exp(-net));
}

void calcular_saidas(double entradas[ENTRADAS])
{
  int i, j;

  // Calcular os nets da entrada para a camada oculta
	for (i = 0; i < NR_NEURON_O; i++) {
		saida_o[i][0] = 0.0;
		saida_o[i][0] += w_e_o[0][i] * 1;  // Calcula saida para bias

		for (j = 1; j < ENTRADAS+1; j++)
			saida_o[i][0] += w_e_o[j][i] * entradas[j-1];

   	 // Calcular a saida de saida_o[i][0]
    	saida_o[i][0] = f_sigmoid(saida_o[i][0]);
    }

   // Calcular net da camada oculta 1 para camada oculta 2
	for (i = 0; i < NR_NEURON_O; i++) {
    	saida_o[i][1] = 0.0;
    	saida_o[i][1] += w_o_o[0][i] * 1;  // Calcula saida para bias

    	for (j = 1; j < NR_NEURON_O+1; j++)
      		saida_o[i][1] += w_o_o[j][i] * saida_o[j-1][0];

    	saida_o[i][1] = f_sigmoid(saida_o[i][1]);
	}

  // Calcular os nets da camada oculta 2 para a saida
	for (i = 0; i < SAIDAS; i++) {
    	saida_s[i] = 0.0;
    	saida_s[i] += w_o_s[0][i] * 1;  // Calcula saida para bias

    	for (j = 1; j < NR_NEURON_O+1; j++)
      		saida_s[i] += w_o_s[j][i] * saida_o[j-1][1];

	    saida_s[i] = f_sigmoid(saida_s[i]);
    }

}

void treinar_RNA()
{
  unsigned int i, j, k;
  double entradas[ENTRADAS];

  for (i = 1; i <= EPOCAS; i++) {
      printf("epoca %d\n", i);
    for (j = 0; j < NR_AMOSTRAS; j++) {
       for(k = 0; k < ENTRADAS; k++)
        entradas[k] = cj_treinamento[j][k];
    	

      // Feedforward
      calcular_saidas(entradas);

      // Backward (backpropagation)
      calcular_delta_saida(cj_treinamento[j][1], cj_treinamento[j][2]);
      calcular_gradiente_oculta();
      calcular_delta_oculta();
      calcular_gradiente_oculta2();
      calcular_delta_oculta2();
      ajustar_pesos_sinapticos(entradas);
    }

  }

}

double calcular_erro(double desejado, double saida)
{
  return desejado - saida;
}

void menu()
{
  int opcao, i;
  double entradas[ENTRADAS];

  printf("Rede Neural Perceptron de Multiplas Camadas\n");
  printf("DRONE\n");
  printf("*******************************************\n\n");
  printf("1.Treinar a rede\n");
  printf("2.Usar a rede\n");
  printf("3.Ver pesos sinpaticos\n");
  printf("4.Sair\n");
  printf("Opcao? ");
  scanf("%d", &opcao);

  switch (opcao) {

    case 1: inicializa_sinapses();
            treinar_RNA();
            salvaSinapses();
            break;

    case 2: for(i = 0; i < ENTRADAS; i++){
    			printf("Entrada %d: ", i+1);
            	scanf("%lf", &entradas[i]);
       		 }
            calcular_saidas(entradas);
            for(i = 0; i < SAIDAS; i++)
            	printf("\nMotor %d: %lf\n", i+1, saida_s[i]);
            printf("\n\n\n");
            break;

    case 3: mostrar_sinapses();
            break;

    case 4: exit(0);

  }
}

void calcular_delta_saida(double desejado, double desejado2)
{
  	delta_saida[0] = calcular_erro(desejado, saida_s[0]) * (1 - saida_s[0] * saida_s[0]);
    delta_saida[1] = calcular_erro(desejado2, saida_s[1]) * (1 - saida_s[1] * saida_s[1]);	
}

void calcular_gradiente_oculta()
{
  int i, j;

  for (i = 0; i < SAIDAS; i++) 
    for (j = 1; j < NR_NEURON_O+1; j++) 
      gradiente_oculta[j-1][1] = delta_saida[i] * w_o_s[j][i];
}

void calcular_delta_oculta()
{
  int i;
    for (i = 0; i < NR_NEURON_O; i++)
        delta_oculta[i][1] = gradiente_oculta[i][1] * saida_o[i][1] * (1 - saida_o[i][1]);
}

void calcular_gradiente_oculta2()
{
  int i, j;

  for (i = 0; i < SAIDAS; i++) 
    for (j = 1; j < NR_NEURON_O+1; j++) 
      gradiente_oculta[j-1][0] = delta_oculta[i][1] * w_o_o[j][i];
}

void calcular_delta_oculta2()
{
  int i;
    for (i = 0; i < NR_NEURON_O; i++)
        delta_oculta[i][0] = gradiente_oculta[i][0] * saida_o[i][0] * (1 - saida_o[i][0]);
}

void ajustar_pesos_sinapticos(double entradas[ENTRADAS])
{
  int i, j;

  // Ajusta os pesos sinapticos da camada intermediaria para a camada de saida
  for (i = 0; i < SAIDAS; i++) {
    w_o_s[0][i] = w_o_s[0][i] + TX_APRENDIZADO * delta_saida[i] * 1;  //bias

    for (j = 1; j < NR_NEURON_O+1; j++)
      w_o_s[j][i] = w_o_s[j][i] + TX_APRENDIZADO * delta_saida[i] * saida_o[j-1][1];

  }

    // Ajusta os pesos sinapticos da 2camada para 1camada
  for (i = 0; i < NR_NEURON_O; i++) {
    w_o_o[0][i] = w_o_o[0][i] + TX_APRENDIZADO * delta_oculta[i][1] * 1;

    for (j = 1; j < NR_NEURON_O+1; j++)
      w_o_o[j][i] = w_o_o[j][i] + TX_APRENDIZADO * delta_oculta[i][1] * delta_oculta[j-1][1];

  }

  // Ajusta os pesos sinapticos da camada oculta para a camada de entrada
  for (i = 0; i < NR_NEURON_O; i++) {
    w_e_o[0][i] = w_e_o[0][i] + TX_APRENDIZADO * delta_oculta[i][0] * 1;

    for (j = 1; j < ENTRADAS+1; j++)
     w_e_o[j][i] = w_e_o[j][i] + TX_APRENDIZADO * delta_oculta[i][0] * entradas[j-1];

  }
  
}

void salvaSinapses(){
  
  int i, j;

  FILE *fp;

  fp = fopen("sinapses.txt", "w+");

    // Inicializa pesos sinapticos da entrada para a camada oculta
    for (i = 0; i < ENTRADAS+1; i++) {
      for (j =0; j < NR_NEURON_O; j++) 
        fprintf(fp,"w_e_o[%d][%d]: %f \n", i, j, w_e_o[i][j]);
       
        fprintf(fp,"\n");
    }

    //mostra pesos sinapticos da 1camada oculata para a 2camada oculta
    for (i = 0; i < NR_NEURON_O+1; i++) {
      for (j =0; j < NR_NEURON_O; j++) 
        fprintf(fp,"w_o_o[%d][%d]: %f \n", i, j, w_o_o[i][j]);
    
        fprintf(fp,"\n");
    }

    // Inicializa pesos sinapticos da camada oculta para a saida
    for (i = 0; i < NR_NEURON_O+1; i++) {
        for (j =0; j < SAIDAS; j++) 
            fprintf(fp,"w_o_s[%d][%d]: %f \n", i, j, w_o_s[i][j]);
         
        fprintf(fp,"\n");
    }

    fclose(fp);
   
}