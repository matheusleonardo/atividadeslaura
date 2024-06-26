#include <stdio.h>
#include <stdlib.h>

typedef struct Elemento {
    int data;
    struct Elemento* next;
} Elemento;

int contarElementos(Elemento* head) {
    int count = 0;
    Elemento* atual = head;
    while (atual != NULL) {
        count++;
        atual = atual->next;
    }
    return count;
}

void adicionarElemento(Elemento** head, int data) {
    Elemento* novoElemento = (Elemento*) malloc(sizeof(Elemento));
    novoElemento->data = data;
    novoElemento->next = *head;
    *head = novoElemento;
}

int main() {
    Elemento* head = NULL;

    adicionarElemento(&head, 10);
    adicionarElemento(&head, 20);
    adicionarElemento(&head, 30);

    int numElementos = contarElementos(head);
    printf("O numero de elementos na lista e: %d\n", numElementos);

    return 0;
}

