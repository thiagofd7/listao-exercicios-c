#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    if (n1 == n2)
        printf("Numeros iguais\n");
    else if (n1 > n2)
        printf("Primeiro e maior\n");
    else
        printf("Segundo maior\n");
    return 0;
}
