//
// Created by 2019202359 on 18/11/19.
//

#ifndef TAD_ARVORE_NUMERO_VARIAVEL_DE_FILHOS_ARVORE_H
#define TAD_ARVORE_NUMERO_VARIAVEL_DE_FILHOS_ARVORE_H

#include <lzma.h>

typedef struct arvvar ArvVar;

ArvVar *arvv_cria(char info);

void arvv_insere (ArvVar* a, ArvVar* sa);

void arvv_imprime (ArvVar* a);

int arvv_pertence (ArvVar* a, char c);

void arvv_libera (ArvVar* a);

int arvv_altura (ArvVar* a);

#endif //TAD_ARVORE_NUMERO_VARIAVEL_DE_FILHOS_ARVORE_H
