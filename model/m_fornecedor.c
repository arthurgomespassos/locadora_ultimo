#include <stdio.h>
#include <stdlib.h>
#include "m_fornecedor.h"
#include "m_util.h"

void salvarFornecedor(Fornecedor fornecedor){
    fornecedor.codigo = incrementaEObtemNovaQuantidadeDeTabela("fornecedor");

    FILE *fp = fopen(caminhoDosDados"fornecedor.bin", "ab");
    if (fp == NULL) {
        printf("Erro em salvarFornecedor");
        exit(1);
    }

    fwrite(&fornecedor, sizeof(Fornecedor), 1, fp);

    fclose(fp);
    fp = NULL;
}

Fornecedor *obterFornecedores(void) {
    FILE *fp = fopen(caminhoDosDados"fornecedor.bin", "rb");
    if (fp == NULL) {
        printf("Erro em obterFornecedores");
        exit(1);
    }

    int fornecedorQtd = obterQuantidadeDeTabela("fornecedor");
    Fornecedor *fornecedores = malloc(sizeof(Fornecedor) * fornecedorQtd);
    fread(fornecedores, sizeof(Fornecedor), fornecedorQtd, fp);

    fclose(fp);
    fp = NULL;

    return fornecedores;
}

void atualizarFornecedor(Fornecedor fornecedor, int codigo) {
    fornecedor.codigo = codigo;

    int fornecedorQtd = obterQuantidadeDeTabela("fornecedor");
    Fornecedor *fornecedores = obterFornecedores();

    for (int i = 0; i < fornecedorQtd; i++) {
        if (fornecedor.codigo == fornecedores[i].codigo) {
            fornecedores[i] = fornecedor;
            break;
        }
    }

    FILE *fp = fopen(caminhoDosDados"fornecedor.bin", "wb");
    if (fp == NULL) {
        printf("Erro em atualizarFornecedor");
        exit(1);
    }

    fwrite(fornecedores, sizeof(Fornecedor), fornecedorQtd, fp);

    fclose(fp);
    fp = NULL;

    free(fornecedores);
    fornecedores = NULL;
}

void deletarFornecedorPorCodigo(int codigo) {
    int fornecedorQtd = obterQuantidadeDeTabela("fornecedor");
    Fornecedor *fornecedores = obterFornecedores();

    for (int i = 0; i < fornecedorQtd; i++) {
        if (codigo == fornecedores[i].codigo) {
            fornecedores[i].ativo = false;
            break;
        }
    }

    FILE *fp = fopen(caminhoDosDados"fornecedor.bin", "wb");
    if (fp == NULL) {
        printf("Erro em deletarFornecedorPorCodigo");
        exit(1);
    }

    fwrite(fornecedores, sizeof(Fornecedor), fornecedorQtd, fp);

    fclose(fp);
    fp = NULL;

    free(fornecedores);
    fornecedores = NULL;
}