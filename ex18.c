#include <stdio.h>

int main() {
    float potenciaLampada, largura, comprimento;
    float areaComodo, potenciaNecessaria, lampadas;
    printf("Digite a potencia da lampada em watts: ");
    scanf("%f", &potenciaLampada);
    printf("Digite a largura do comodo: ");
    scanf("%f", &largura);
    printf("Digite o comprimento do comodo: ");
    scanf("%f", &comprimento);
    areaComodo = largura * comprimento;
    potenciaNecessaria = areaComodo * 18;
    lampadas = potenciaNecessaria / potenciaLampada;
    printf("Numero de lampadas necessarias: %.2f\n", lampadas);
    return 0;
}
