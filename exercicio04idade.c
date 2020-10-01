#include <stdio.h>

int main () {
	 
	 int nascimento, subtracao, multiplicacao, ano_atual; 
	 
	 
	 printf("Digite o seu ano de nascimento: ");
	 scanf("%i", &nascimento);
	 
	 ano_atual = 2020; 
	 subtracao = ano_atual - nascimento;
	 multiplicacao = subtracao * 365; 
	 
	 printf("%i dias", multiplicacao);
	 
	
	return 0; 

}
