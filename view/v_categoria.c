#include <stdio.h>
#include "v_categoria.h"
#include "v_util.h"

void exibeCategoria(Categoria categoria) {
    printf("\nDados da Categoria:\n");
    exibeCodigo(categoria.codigo);
    exibeDescricao(categoria.descricao);
    exibeValorLocacao(categoria.valorLocacao);
}

Categoria criaCategoria(void) {
    Categoria categoria;

    printf("\nDigite os dados da Categoria...\n");
    categoria.codigo = 1; // TODO getUltimaCategoria().codigo + 1;
    criaDescricao(categoria.descricao);
    criaValorLocacao(&categoria.valorLocacao);
    categoria.ativo = true;

    return categoria;
}