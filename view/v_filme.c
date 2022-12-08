#include <stdio.h>
#include <stdlib.h>
#include "../model/m_filme.h"
#include "../model/m_util.h"
#include "v_util.h"

void exibeFilme(Filme filme) {
    printf("\nDados do filme:\n");

    exibeCodigo(filme.codigo);
    printf("codigo da categoria: %d\n", filme.codigoCategoria);
    exibeDescricao(filme.descricao);
    exibeExemplares(filme.exemplares);
    exibeLingua(filme.lingua);
    exibeValor(" do imposto por unidade:", filme.impostoPorUnidade);
    exibeValor(" do frete por unidade:", filme.impostoPorUnidade);
    exibeValor(" do custo por unidade:", filme.impostoPorUnidade);
    exibeValor(" do preco total de compra por unidade:", filme.impostoPorUnidade);
    exibeValor(" de locacao por unidade:", filme.impostoPorUnidade);
}

Filme criaFilme(void) {
    Filme filme = {};

    printf("\nDigite os dados do filme...\n");
    filme.codigo = 1; // este é um valor sem importancia que só existe para evitar comportamentos inesperados
    criaCodigo(" da categoria do filme", &filme.codigoCategoria);
    criaDescricao(filme.descricao);
    criaExemplares(&filme.exemplares);
    criaLinguaDoFilme(filme.lingua);
    criaValor(" do imposto por unidade", &filme.impostoPorUnidade);
    criaValor(" do frete por unidade", &filme.impostoPorUnidade);
    criaValor(" do custo por unidade", &filme.impostoPorUnidade);
    criaValor(" do preco total de compra por unidade", &filme.impostoPorUnidade);
    criaValor(" de locacao por unidade", &filme.impostoPorUnidade);
    filme.ativo = true;

    return filme;
}

void listarFilmes(int codigoInicial, int codigoFinal) {
    int filmeQtd = obterQuantidadeDeTabela("filme");
    Filme *filmes = obterFilmes();

    for (int i = 0; i < filmeQtd; i++) {
        if (!filmes[i].ativo) continue;
        if (filmes[i].codigo < codigoInicial) continue;
        if (filmes[i].codigo > codigoFinal) continue;

        exibeFilme(filmes[i]);
    }

    free(filmes);
    filmes = NULL;
}