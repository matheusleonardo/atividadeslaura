#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarConsoantes(char str[]) {
    int contagemConsoantes = 0;
    int tamanho = strlen(str);

    for (int i = 0; i < tamanho; i++) {
        char ch = tolower(str[i]);

        if ((ch >= 'a' && ch <= 'z') && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            contagemConsoantes++;
        }
    }

    return contagemConsoantes;
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    int consoantes = contarConsoantes(str);
    printf("Numero de consoantes: %d\n", consoantes);

    return 0;
}

