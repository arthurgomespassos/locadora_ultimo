#include "m_util.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isArquivoExiste(char *caminhoCompletoDoArquivo) {
    FILE *fp;
    if ((fp = fopen(caminhoCompletoDoArquivo, "r"))) {
        fclose(fp);
        fp = NULL;
        return true;
    }
    return false;
}

void resetaArquivoBinario(char *caminhoCompletoDoArquivo) {
    FILE *fp = fopen(caminhoCompletoDoArquivo, "wb");
    if (fp == NULL) {
        printf("ERRO AO RESETAR O ARQUIVO %s", caminhoCompletoDoArquivo);
        exit(1);
    }

    fclose(fp);
    fp = NULL;
}

void resetaEColocaZeroEmArquivoBinario(char *caminhoCompletoDoArquivo) {
    FILE *fp = fopen(caminhoCompletoDoArquivo, "wb");
    if (fp == NULL) {
        printf("ERRO AO ABRIR O ARQUIVO %s", caminhoCompletoDoArquivo);
        exit(1);
    }

    int zero = 0;
    fwrite(&zero, sizeof(int), 1, fp);

    fclose(fp);
    fp = NULL;
}
