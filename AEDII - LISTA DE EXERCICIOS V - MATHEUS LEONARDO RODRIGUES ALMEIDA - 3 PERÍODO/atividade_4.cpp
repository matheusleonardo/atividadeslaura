#include <stdio.h>

float calcularIMC(float peso, float altura) {
    if (altura <= 0) {
        printf("Altura invalida! Digite uma altura valida.\n");
        return -1;
    }
    return peso / (altura * altura);
}

const char* classificarIMC(float imc) {
    if (imc < 18.5) {
        return "Abaixo do peso";
    } else if (imc < 25) {
        return "Peso normal";
    } else if (imc < 30) {
        return "Sobrepeso";
    } else if (imc < 35) {
        return "Obesidade (grau I)";
    } else if (imc < 40) {
        return "Obesidade (grau II)";
    } else {
        return "Obesidade morbida (grau III)";
    }
}

int main() {
    float peso, altura;

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    float imc = calcularIMC(peso, altura);

    if (imc != -1) {
        const char* classificacao = classificarIMC(imc);
        printf("Seu IMC: %.2f\n", imc);
        printf("Classificacao: %s\n", classificacao);
    }

    return 0;
}

