#include <stdio.h>

int main() {
    float l1, l2, l3;
    printf("Digite o primeiro lado: ");
    scanf("%f", &l1);
    printf("Digite o segundo lado: ");
    scanf("%f", &l2);
    printf("Digite o terceiro lado: ");
    scanf("%f", &l3);
    if (l1 == l2) {
        if (l2 == l3)
            printf("Triangulo Equilatero\n");
        else
            printf("Triangulo Isosceles\n");
    } else if (l1 == l3 || l2 == l3) {
        printf("Triangulo Isosceles\n");
    } else {
        printf("Triangulo Escaleno\n");
    }
    return 0;
}
