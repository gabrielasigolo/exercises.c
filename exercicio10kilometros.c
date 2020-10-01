#include <stdio.h>

int main (void){

float distancia, combustivel, consumo;

printf("Digite a distancia percorrida:");
scanf("%f", &distancia);

printf("\nDigite o combustivel gasto: ");
scanf("%f", &combustivel);

consumo = distancia/combustivel; 

printf("\nO consumo medio de combustivel do seu veiculo sera: %.2f litros", consumo);

return 0;

}


