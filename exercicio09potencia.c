#include <stdio.h>
#include <math.h>

int main () {
	float potencia, valor, raiz_quadrada;
	
	printf("Digite um valor para calcular sua raiz quadrada e a sua oitava potencia:"); 
	scanf("%f", &valor); 
	
    raiz_quadrada = sqrt(valor);
	
	printf("A raiz quadrada do seu valor sera %f", raiz_quadrada);

	potencia = pow(valor,8); 
	
	printf("\nE a oitava potencia do seu valor sera %f", potencia);

	
	return 0;
}

	




