#include <stdio.h>

int main() {
    int lados;
    float medida, perimetro, area;
    printf("Digite o numero de lados do poligono: ");
    scanf("%d", &lados);
    printf("Digite a medida do lado em cm: ");
    scanf("%f", &medida);
    if (lados == 3) {
        perimetro = medida * 3;
        printf("TRIANGULO\n");
        printf("Perimetro: %.2f\n", perimetro);
    } else if (lados == 4) {
        area = medida * medida;
        printf("QUADRADO\n");
        printf("Area: %.2f\n", area);
    } else {
        printf("PENTAGONO\n");
    }
    return 0;
}
