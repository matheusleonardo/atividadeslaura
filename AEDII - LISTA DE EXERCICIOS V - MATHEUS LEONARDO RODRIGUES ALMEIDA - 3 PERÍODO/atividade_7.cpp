#include <stdio.h>
#include <string.h>

typedef struct {
    char marca[50];
    char modelo[50];
    int anoFabricacao;
} Carro;

int saoMesmoModelo(Carro carro1, Carro carro2) {
    return strcmp(carro1.modelo, carro2.modelo) == 0;
}

int main() {
    Carro carro1 = {"Toyota", "Corolla", 2023};
    Carro carro2 = {"Honda", "Civic", 2022};

    if (saoMesmoModelo(carro1, carro2)) {
        printf("Os carros sao do mesmo modelo.\n");
    } else {
        printf("Os carros nao sao do mesmo modelo.\n");
    }

    return 0;
}

