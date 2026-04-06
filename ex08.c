#include <stdio.h>

int main() {
    float metros, centimetros;
    printf("Digite a quantidade em metros: ");
    scanf("%f", &metros);
    centimetros = metros * 100;
    printf("Valor em centimetros: %.2f\n", centimetros);
    return 0;
}
