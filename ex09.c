#include <stdio.h>

int main() {
    float lado, area, dobro;
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    dobro = area * 2;
    printf("Area do quadrado: %.2f\n", area);
    printf("Dobro da area: %.2f\n", dobro);
    return 0;
}
