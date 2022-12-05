#include "m_util.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int obterQuantidadeDeTabela(char *nomeMinusculoDaTabela){
    char caminhoCompletoDaTabela[90] = "";
    strcat(caminhoCompletoDaTabela, caminhoDosDados);
    strcat(caminhoCompletoDaTabela, nomeMinusculoDaTabela);
    strcat(caminhoCompletoDaTabela, "Qtd.bin");

    FILE *fp = fopen(caminhoCompletoDaTabela, "rb");
    if (fp == NULL) {
        printf("Erro em obterQuantidadeDeTabela(\"%s\")", caminhoCompletoDaTabela);
        exit(1);
    }

    int quantidade;
    fread(&quantidade, sizeof(int), 1, fp);

    fclose(fp);
    fp = NULL;

    return quantidade;
}

int incrementaEObtemNovaQuantidadeDeTabela(char *nomeMinusculoDaTabela){
    char caminhoCompletoDaTabela[90] = "";
    strcat(caminhoCompletoDaTabela, caminhoDosDados);
    strcat(caminhoCompletoDaTabela, nomeMinusculoDaTabela);
    strcat(caminhoCompletoDaTabela, "Qtd.bin");

    int quantidadeAntiga = obterQuantidadeDeTabela(nomeMinusculoDaTabela);
    int quantidadeNova = quantidadeAntiga + 1;

    FILE *fp = fopen(caminhoCompletoDaTabela, "wb");
    if (fp == NULL) {
        printf("Erro em incrementaQuantidadeDeTabela(\"%s\")", caminhoCompletoDaTabela);
        exit(1);
    }

    fwrite(&quantidadeNova, sizeof(int), 1, fp);

    fclose(fp);
    fp = NULL;

    return quantidadeNova;
}