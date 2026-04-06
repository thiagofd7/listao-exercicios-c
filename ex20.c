#include <stdio.h>

int main() {
    float odometroInicial, odometroFinal, litrosGastos, valorPassageiros;
    float kmPercorridos, mediaConsumo, gastoCombustivel, lucroLiquido;
    printf("Digite a marcacao do odometro no inicio do dia: ");
    scanf("%f", &odometroInicial);
    printf("Digite a marcacao do odometro no final do dia: ");
    scanf("%f", &odometroFinal);
    printf("Digite o numero de litros de combustivel gasto: ");
    scanf("%f", &litrosGastos);
    printf("Digite o valor total recebido dos passageiros: ");
    scanf("%f", &valorPassageiros);
    kmPercorridos   = odometroFinal - odometroInicial;
    mediaConsumo    = kmPercorridos / litrosGastos;
    gastoCombustivel = litrosGastos * 2.90;
    lucroLiquido    = valorPassageiros - gastoCombustivel;
    printf("Media de consumo em Km/L: %.2f\n", mediaConsumo);
    printf("Lucro liquido do dia: R$%.2f\n", lucroLiquido);
    return 0;
}
