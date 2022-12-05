#include <stdio.h>
#include <stdlib.h>
#include "m_categoria.h"
#include "m_util.h"

void salvarCategoria(Categoria categoria) {
    categoria.codigo = incrementaEObtemNovaQuantidadeDeTabela("categoria");

    FILE *fp = fopen(caminhoDosDados"categoria.bin", "ab");
    if (fp == NULL) {
        printf("Erro em salvarCategoria");
        exit(1);
    }

    fwrite(&categoria, sizeof(Categoria), 1, fp);

    fclose(fp);
    fp = NULL;
}

Categoria *obterCategorias(void) {
    FILE *fp = fopen(caminhoDosDados"categoria.bin", "rb");
    if (fp == NULL) {
        printf("Erro em listarCategoriaPorFaixaDeCodigo");
        exit(1);
    }

    int categoriaQtd = obterQuantidadeDeTabela("categoria");
    Categoria *categorias = malloc(sizeof(Categoria) * categoriaQtd);
    fread(categorias, sizeof(Categoria), categoriaQtd, fp);

    fclose(fp);
    fp = NULL;

    return categorias;
}

void atualizarCategoria(Categoria categoria, int codigo) {
    categoria.codigo = codigo;

    int categoriaQtd = obterQuantidadeDeTabela("categoria");
    Categoria *categorias = obterCategorias();

    for (int i = 0; i < categoriaQtd; i++) {
        if (categoria.codigo == categorias[i].codigo) {
            categorias[i] = categoria;
            break;
        }
    }

    FILE *fp = fopen(caminhoDosDados"categoria.bin", "wb");
    if (fp == NULL) {
        printf("Erro em atualizarCategoria");
        exit(1);
    }

    fwrite(categorias, sizeof(Categoria), categoriaQtd, fp);

    fclose(fp);
    fp = NULL;

    free(categorias);
    categorias = NULL;
}

void deletarCategoriaPorCodigo(int codigo) {
    int categoriaQtd = obterQuantidadeDeTabela("categoria");
    Categoria *categorias = obterCategorias();

    for (int i = 0; i < categoriaQtd; i++) {
        if (codigo == categorias[i].codigo) {
            categorias[i].ativo = false;
            break;
        }
    }

    FILE *fp = fopen(caminhoDosDados"categoria.bin", "wb");
    if (fp == NULL) {
        printf("Erro em deletarCategoriaPorCodigo");
        exit(1);
    }

    fwrite(categorias, sizeof(Categoria), categoriaQtd, fp);

    fclose(fp);
    fp = NULL;

    free(categorias);
    categorias = NULL;
}