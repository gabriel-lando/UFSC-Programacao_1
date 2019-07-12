#include <stdio.h>

int main(){
	
	char string1[5] = {'H', 'e', 'l', 'l', 'o'};
	char string2[] = "World";

	printf("Mensagem: %s %s\n", string1, string2);

	char str[100];
	printf("Digite uma mensagem: ");
	scanf("%s", str);

	printf("\nVoce digitou: %s\n", str);

}