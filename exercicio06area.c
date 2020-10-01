#include <stdio.h>

int main () {
	int altura, base, area; 
	
	printf("Digite a base do triangulo: ");
	scanf("%i", &base);
	
	printf("Digite a altura do triangulo: ");
	scanf("%i", &altura);
	
	area = altura * base;
	
	printf("A area sera: %i", area );
	
	return 0;
	
}
