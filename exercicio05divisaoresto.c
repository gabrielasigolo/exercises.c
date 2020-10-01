#include <stdio.h>

int main () {
	
	int numero_1, numero_2, resto, divisao;
	
		 
	printf("Digite o primeiro numero para dividir: ");
	scanf("%i", & numero_1);
	
	printf("\nDigite o outro numero: ");
	scanf("%i", & numero_2);
	
	divisao = numero_1 / numero_2; 
	
	resto = numero_1 % numero_2;
	
	printf("O resultado da divisao sera %i", divisao);
	printf("\nO resto da divisao sera: %i", resto);
	

	return 0;
}




	
	
