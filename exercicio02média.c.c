#include <stdio.h>

int main () {
	
	float numero_1, numero_2, media;   
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &numero_1);
	
	
	printf("Digite o segundo valor: ");
	scanf("%f", &numero_2);
	
	media = (numero_1 + numero_2) / 2;
	
	printf("A sua media e: %.1f", media);
	
	
	return 0; 
}
