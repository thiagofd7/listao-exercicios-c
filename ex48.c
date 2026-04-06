#include <stdio.h>

int main() {
    float n1, n2, optativa, media;
    printf("Digite a nota da primeira avaliacao: ");
    scanf("%f", &n1);
    printf("Digite a nota da segunda avaliacao: ");
    scanf("%f", &n2);
    printf("Digite a nota da optativa (-1 caso nao tenha feito): ");
    scanf("%f", &optativa);
    if (optativa != -1) {
        if (n1 < n2)
            n1 = optativa;
        else
            n2 = optativa;
    }
    media = (n1 + n2) / 2;
    printf("Media: %.2f\n", media);
    if (media >= 6)
        printf("Aprovado\n");
    else if (media < 3)
        printf("Reprovado\n");
    else
        printf("Exame\n");
    return 0;
}
