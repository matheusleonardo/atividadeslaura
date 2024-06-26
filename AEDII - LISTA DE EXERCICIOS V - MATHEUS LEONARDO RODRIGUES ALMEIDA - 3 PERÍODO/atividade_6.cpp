#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[100];
    char autor[100];
    int anoPublicacao;
} Livro;

Livro encontrarLivroMaisRecente(Livro livros[], int tamanho) {
    Livro livroMaisRecente = livros[0];

    for (int i = 1; i < tamanho; i++) {
        if (livros[i].anoPublicacao > livroMaisRecente.anoPublicacao) {
            livroMaisRecente = livros[i];
        }
    }

    return livroMaisRecente;
}

int main() {
    Livro livros[4] = {
        {"Dom Casmurro", "Machado de Assis", 1899},
        {"Grande Sertao: Veredas", "Joao Guimaraes Rosa", 1956},
        {"A Hora da Estrela", "Clarice Lispector", 1977},
        {"Capitaes da Areia", "Jorge Amado", 1937}
    };

    Livro livroMaisRecente = encontrarLivroMaisRecente(livros, 4);

    printf("O livro mais recente e:\n");
    printf("Titulo: %s\n", livroMaisRecente.titulo);
    printf("Autor: %s\n", livroMaisRecente.autor);
    printf("Ano de Publicacao: %d\n", livroMaisRecente.anoPublicacao);

    return 0;
}

