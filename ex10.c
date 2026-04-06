#include <stdio.h>

int main() {
    float salarioHora, horasTrabalhadas, salarioTotal;
    printf("Digite quanto voce ganha por hora: ");
    scanf("%f", &salarioHora);
    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &horasTrabalhadas);
    salarioTotal = salarioHora * horasTrabalhadas;
    printf("Salario do mes: R$%.2f\n", salarioTotal);
    return 0;
}
