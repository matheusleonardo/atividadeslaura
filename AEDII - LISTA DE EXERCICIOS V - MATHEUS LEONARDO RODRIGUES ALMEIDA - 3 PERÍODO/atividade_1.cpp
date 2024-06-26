#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float calcularMedia(int numeros[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    return (float) soma / tamanho;
}

int main() {
    int tamanho;
    
    printf("Informe o tamanho do array: ");
    scanf("%d", &tamanho);
    
    int numeros[tamanho];
    
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        numeros[i] = rand() % 100;
    }
    
    printf("\nElementos do array:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    
    float media = calcularMedia(numeros, tamanho);
    printf("\n\nMedia: %.2f", media);
    
    return 0;
}

