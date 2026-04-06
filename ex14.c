#include <stdio.h>

int main() {
    int carrosVendidos;
    float valorVendas, salarioFixo, valorPorCarro, salarioFinal;
    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &carrosVendidos);
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorVendas);
    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite o valor recebido por carro vendido: ");
    scanf("%f", &valorPorCarro);
    salarioFinal = salarioFixo + (carrosVendidos * valorPorCarro) + (valorVendas * 5 / 100);
    printf("Salario final do vendedor: R$%.2f\n", salarioFinal);
    return 0;
}
