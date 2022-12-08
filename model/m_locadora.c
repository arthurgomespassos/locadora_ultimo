#include <stdio.h>
#include <stdlib.h>
#include "m_locadora.h"
#include "m_util.h"

void salvarOuAtualizarLocadora(Locadora locadora) {
    FILE *fp = fopen(caminhoDosDados"locadora.bin", "wb");
    if (fp == NULL) {
        printf("Erro em salvarOuAtualizarLocadora");
        exit(1);
    }

    fwrite(&locadora, sizeof (Locadora), 1,fp);

    fclose(fp);
    fp = NULL;

}

Locadora obtemLocadoraDoDisco(void){
    FILE *fp = fopen(caminhoDosDados"locadora.bin", "rb");
    if (fp == NULL) {
        printf("Erro em obtemLocadoraDoDisco");
        exit(1);
    }

    Locadora locadora = {};
    fread(&locadora, sizeof (Locadora), 1,fp);

    fclose(fp);
    fp = NULL;

    return locadora;
};
