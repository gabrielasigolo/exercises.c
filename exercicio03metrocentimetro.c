#include <stdio.h>

int main () {
	int metros, conversao;
	
	printf("Digite o comprimento em metros: ");
	scanf("%i", &metros);
	
	conversao = metros * 100;
	
	printf("Em centimetros equivale a: %icm ", conversao);
	
	
	
	return 0;
}
