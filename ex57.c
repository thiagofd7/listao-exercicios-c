#include <stdio.h>

int main() {
    float a, b, c;
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);
    printf("Digite o terceiro valor: ");
    scanf("%f", &c);
    if (a > b) {
        if (a > c) {
            if (b > c)
                printf("%.2f, %.2f, %.2f\n", a, b, c);
            else
                printf("%.2f, %.2f, %.2f\n", a, c, b);
        } else {
            printf("%.2f, %.2f, %.2f\n", c, a, b);
        }
    } else {
        if (b > c) {
            if (a > c)
                printf("%.2f, %.2f, %.2f\n", b, a, c);
            else
                printf("%.2f, %.2f, %.2f\n", b, c, a);
        } else {
            printf("%.2f, %.2f, %.2f\n", c, b, a);
        }
    }
    return 0;
}
