//
// Created by 2019202359 on 18/11/19.
//

#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

struct arvvar{
    char info;
    ArvVar* prim;  /*!< ponteiro para eventual primeiro filho */
    ArvVar* prox; /*< ponteiro para eventual irmao*/
};

ArvVar *arvv_cria(char c) {
    ArvVar* a = (ArvVar*)malloc(sizeof(ArvVar));
    a->info = c;
    a->prim = NULL;
    a->prox = NULL;
    return a;
}

// Insere sa como primeira subarvore de a
void arvv_insere(ArvVar *a, ArvVar *sa) {
    sa->prox = a->prim;
    a->prim = sa;
}

// Imprime em pré-ordem
void arvv_imprime (ArvVar* a){
    ArvVar* p;
    printf("<%c\n", a->info);
    for (p = a->prim; p!=NULL; p = p->prox) {
        arvv_imprime(p);
    }
    printf(">");
}

// Retorna 1 se 'c' pertence a árvore e 0 caso contrário
int arvv_pertence(ArvVar *a, char c) {
    ArvVar* p;

    if (a->info == c){
        return 1;
    } else {
        for (p=a->prim; p!=NULL; p = p->prox) {
            if (arvv_pertence(p, c))
                return 1;
        }
    }
    return 0;
}

// Liberar toda a memória alocada
void arvv_libera(ArvVar *a) {
//    for (ArvVar* p = a->prim; p!=NULL; p=p->prox){
//        ArvVar* t = p->prox;
//        arvv_libera(p);
//        p = t;
//    }
//    free(a);
    ArvVar* p = a->prim;
    while (p!=NULL) {
        ArvVar* t = p->prox;
        arvv_libera(p);
        p = t;
    }
    free(a);
}

// Retorna a maior altura da arvore a
int arvv_altura(ArvVar *a) {
    int hmax = -1;
    ArvVar *p;
    for (p = a->prim; p != NULL; p = p->prox) {
        int h = arvv_altura(p);
        if (h>hmax){
            hmax = h;
        }
    }
    return hmax + 1;
}


