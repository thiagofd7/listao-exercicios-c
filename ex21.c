#include <stdio.h>

int main() {
    float comprimentoPista, consumoCarro, distancia, litrosNecessarios;
    int totalVoltas, reabastecimentos, voltasPorTrecho;
    printf("Digite o comprimento da pista em metros: ");
    scanf("%f", &comprimentoPista);
    printf("Digite o numero total de voltas: ");
    scanf("%d", &totalVoltas);
    printf("Digite o numero de reabastecimentos desejados: ");
    scanf("%d", &reabastecimentos);
    printf("Digite o consumo do carro em Km/L: ");
    scanf("%f", &consumoCarro);
    voltasPorTrecho  = totalVoltas / (reabastecimentos + 1);
    distancia        = (comprimentoPista * voltasPorTrecho) / 1000;
    litrosNecessarios = distancia / consumoCarro;
    printf("Litros necessarios ate o primeiro reabastecimento: %.2f\n", litrosNecessarios);
    return 0;
}
