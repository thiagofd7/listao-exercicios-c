#include <stdio.h>

int main() {
    float custoFabrica, custoFinal;
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);
    custoFinal = custoFabrica + (custoFabrica * 28 / 100) + (custoFabrica * 45 / 100);
    printf("Custo final ao consumidor: R$%.2f\n", custoFinal);
    return 0;
}
