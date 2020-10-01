#include <stdio.h>
#define PI 3.14

int main () {
	float raio, circunferencia; 
	
	printf("Digite o raio da circunferencia: ");
	scanf("%f", &raio);
	
	circunferencia = 2 * PI * raio; 
	
	printf("O perimetro da circunferencia e: %.2f", circunferencia); 

	
	
	return 0; 
}
