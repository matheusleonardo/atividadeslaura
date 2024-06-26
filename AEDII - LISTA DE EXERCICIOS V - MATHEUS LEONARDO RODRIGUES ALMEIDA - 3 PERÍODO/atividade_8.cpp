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
    } else {
        Node* atual = *head;
        while (atual->next != NULL) {
            atual = atual->next;
        }
        atual->next = novoNo;
    }
}

int main() {
    Node* head = NULL;

    inserirNoFim(&head, 10);
    inserirNoFim(&head, 20);
    inserirNoFim(&head, 30);
    inserirNoFim(&head, 40);
    inserirNoFim(&head, 50);
    inserirNoFim(&head, 60);

    Node* atual = head;
    while (atual != NULL) {
        printf("%d ", atual->data);
        atual = atual->next;
    }
    printf("\n");

    return 0;
}

