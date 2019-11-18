#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main() {

    ArvVar* a = arvv_cria ('a');
    ArvVar* b = arvv_cria ('b');
    ArvVar* c = arvv_cria ('c');
    ArvVar* d = arvv_cria ('d');
    ArvVar* e = arvv_cria ('e');
    ArvVar* f = arvv_cria ('f');
    ArvVar* g = arvv_cria ('g');
    ArvVar* h = arvv_cria ('h');
    ArvVar* i = arvv_cria ('i');
    ArvVar* j = arvv_cria ('j');


    // Montar a árvore do slide
    arvv_insere(c, d);
    arvv_insere(i, j);

    arvv_insere(g, i);
    arvv_insere(g, h);

    arvv_insere(b, e);
    arvv_insere(b, c);

    arvv_insere(a, g);
    arvv_insere(a, f);
    arvv_insere(a, b);

    // Imprimir a arvore
    arvv_imprime(a);



    return EXIT_SUCCESS;
}