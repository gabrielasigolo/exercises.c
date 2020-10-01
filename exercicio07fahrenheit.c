#include <stdio.h>

int main () {
	
	float celsius, fahrenheit; 
	
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit - 32) / 1.8;
	
	
	printf("A temperatura em Celsius e: %f", celsius);
	

	return 0;
}
