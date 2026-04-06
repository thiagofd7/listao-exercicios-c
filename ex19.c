#include <stdio.h>

int main() {
    float comprimento, largura, altura, areaParedes, caixas;
    printf("Digite o comprimento da cozinha: ");
    scanf("%f", &comprimento);
    printf("Digite a largura da cozinha: ");
    scanf("%f", &largura);
    printf("Digite a altura da cozinha: ");
    scanf("%f", &altura);
    areaParedes = 2 * (comprimento * altura) + 2 * (largura * altura);
    caixas = areaParedes / 1.5;
    printf("Quantidade de caixas de azulejos: %.2f\n", caixas);
    return 0;
}
