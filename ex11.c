#include <stdio.h>

int main() {
    int totalEleitores, votosBrancos, votosNulos, votosValidos;
    float percBrancos, percNulos, percValidos;
    printf("Digite o total de eleitores: ");
    scanf("%d", &totalEleitores);
    printf("Digite o numero de votos brancos: ");
    scanf("%d", &votosBrancos);
    printf("Digite o numero de votos nulos: ");
    scanf("%d", &votosNulos);
    printf("Digite o numero de votos validos: ");
    scanf("%d", &votosValidos);
    percBrancos = (float)votosBrancos * 100 / totalEleitores;
    percNulos   = (float)votosNulos   * 100 / totalEleitores;
    percValidos = (float)votosValidos * 100 / totalEleitores;
    printf("Percentual de votos brancos: %.2f%%\n", percBrancos);
    printf("Percentual de votos nulos: %.2f%%\n", percNulos);
    printf("Percentual de votos validos: %.2f%%\n", percValidos);
    return 0;
}
