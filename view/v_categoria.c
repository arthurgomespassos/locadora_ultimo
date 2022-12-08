#include <stdio.h>
#include <stdlib.h>
#include "v_categoria.h"
#include "v_util.h"
#include "../model/m_util.h"
#include "../model/m_categoria.h"

void exibeCategoria(Categoria categoria) {
    printf("\nDados da Categoria:\n");
    exibeCodigo(categoria.codigo);
    exibeDescricao(categoria.descricao);
    exibeValorLocacao(categoria.valorLocacao);
}

Categoria criaCategoria(void) {
    Categoria categoria;

    printf("\nDigite os dados da Categoria...\n");
    categoria.codigo = 1; // este é um valor sem importancia que só existe para evitar comportamentos inesperados
    criaDescricao(categoria.descricao);
    criaValorLocacao(&categoria.valorLocacao);
    categoria.ativo = true;

    return categoria;
}

void listarCategorias(void) {
    int categoriasQtd = obterQuantidadeDeTabela("categoria");
    Categoria *categorias = obterCategorias();

    for (int i = 0; i < categoriasQtd; i++)
        if (categorias[i].ativo)
            exibeCategoria(categorias[i]);

    free(categorias);
    categorias = NULL;
}

