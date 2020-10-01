#include <stdio.h>

int main () {
	int numero, dobro;
	
	printf("Digite um numero para saber seu dobro: ");
	scanf("%i", &numero);
	
	dobro = numero * 2; 
	
	printf("O dobro do seu numero sera: %i", dobro); 
	
	
	return 0; 
}

