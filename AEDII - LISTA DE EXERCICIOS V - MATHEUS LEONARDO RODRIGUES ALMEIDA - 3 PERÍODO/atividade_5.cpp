#include <stdio.h>
#include <stdlib.h>

int calcularMDC(int num1, int num2) {
    if (num1 == 0 || num2 == 0) {
        return 0;
    }

    num1 = abs(num1);
    num2 = abs(num2);

    while (num2 != 0) {
        int resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    }

    return num1;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    int mdc = calcularMDC(num1, num2);
    printf("O MDC de %d e %d e: %d\n", num1, num2, mdc);

    return 0;
}

