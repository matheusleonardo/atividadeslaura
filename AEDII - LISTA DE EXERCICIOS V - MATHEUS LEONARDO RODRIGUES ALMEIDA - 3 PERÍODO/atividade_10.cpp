#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void inserirNoFim(Node** head, int data) {
    Node* novoNo = (Node*) malloc(sizeof(Node));
    novoNo->data = data;
    novoNo->next = NULL;

    if (*head == NULL) {
        *head = novoNo;
        return;
    }

    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = novoNo;
}

void removerPrimeiro(Node** head) {
    if (*head == NULL) {
        printf("Lista vazia! Nao ha elementos para remover.\n");
        return;
    }

    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void imprimirLista(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;

    inserirNoFim(&head, 10);
    inserirNoFim(&head, 20);
    inserirNoFim(&head, 30);
    inserirNoFim(&head, 40);
    inserirNoFim(&head, 50);
    inserirNoFim(&head, 60);

    printf("Lista antes da remocao:\n");
    imprimirLista(head);

    removerPrimeiro(&head);

    printf("\nLista depois da remocao:\n");
    imprimirLista(head);

    return 0;
}

