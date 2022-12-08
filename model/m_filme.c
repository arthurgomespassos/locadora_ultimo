#include <stdio.h>
#include <stdlib.h>
#include "m_filme.h"
#include "m_util.h"

void salvarFilme(Filme filme){
    filme.codigo = incrementaEObtemNovaQuantidadeDeTabela("filme");

    FILE *fp = fopen(caminhoDosDados"filme.bin", "ab");
    if (fp == NULL) {
        printf("Erro em salvarFilme");
        exit(1);
    }

    fwrite(&filme, sizeof(Filme), 1, fp);

    fclose(fp);
    fp = NULL;
}

Filme *obterFilmes(void) {
    FILE *fp = fopen(caminhoDosDados"filme.bin", "rb");
    if (fp == NULL) {
        printf("Erro em obterFilmes");
        exit(1);
    }

    int filmeQtd = obterQuantidadeDeTabela("filme");
    Filme *filmes = malloc(sizeof(Filme) * filmeQtd);
    fread(filmes, sizeof(Filme), filmeQtd, fp);

    fclose(fp);
    fp = NULL;

    return filmes;
}

void atualizarFilme(Filme filme, int codigo) {
    filme.codigo = codigo;

    int filmeQtd = obterQuantidadeDeTabela("filme");
    Filme *filmes = obterFilmes();

    for (int i = 0; i < filmeQtd; i++) {
        if (filme.codigo == filmes[i].codigo) {
            filmes[i] = filme;
            break;
        }
    }

    FILE *fp = fopen(caminhoDosDados"filme.bin", "wb");
    if (fp == NULL) {
        printf("Erro em atualizarFilme");
        exit(1);
    }

    fwrite(filmes, sizeof(Filme), filmeQtd, fp);

    fclose(fp);
    fp = NULL;

    free(filmes);
    filmes = NULL;
}

void deletarFilmePorCodigo(int codigo) {
    int filmeQtd = obterQuantidadeDeTabela("filme");
    Filme *filmes = obterFilmes();

    for (int i = 0; i < filmeQtd; i++) {
        if (codigo == filmes[i].codigo) {
            filmes[i].ativo = false;
            break;
        }
    }

    FILE *fp = fopen(caminhoDosDados"filme.bin", "wb");
    if (fp == NULL) {
        printf("Erro em deletarFilmePorCodigo");
        exit(1);
    }

    fwrite(filmes, sizeof(Filme), filmeQtd, fp);

    fclose(fp);
    fp = NULL;

    free(filmes);
    filmes = NULL;
}