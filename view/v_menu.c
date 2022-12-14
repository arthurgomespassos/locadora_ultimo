#include "v_menu.h"
#include "../entities/types.h"
#include "v_locadora.h"
#include "v_cliente.h"
#include "v_categoria.h"
#include "v_funcionario.h"
#include "v_fornecedor.h"
#include "../model/m_locadora.h"
#include "../model/m_categoria.h"
#include "v_util.h"
#include "../model/m_cliente.h"
#include "../model/m_funcionario.h"
#include "../model/m_fornecedor.h"
#include "v_filme.h"
#include "../model/m_filme.h"
#include <stdio.h>

int menuLocadora(void) {
    int i;
    do {
        printf("\nMENU LOCADORA:\n");
        printf("Escolha uma Opcao:\n");
        printf("(1)Criar\n");
        printf("(2)Exibir\n");
        printf("(3)Atualizar\n");
        printf("(4)Sair\n");

        scanf("%d%*c", &i);
    } while ((i < 1) || (i > 4));
    if (i == 1) {
        salvarOuAtualizarLocadora(criaLocadora());
    } else if (i == 2) {
        exibeLocadora(obtemLocadoraDoDisco());
    } else if (i == 3) {
        salvarOuAtualizarLocadora(criaLocadora());
    }
    return i == 4 ? 0 : i;
}

int menuCliente(void) {
    int i;
    do {
        printf("\nMENU CLIENTE:\n");
        printf("Escolha uma Opcao:\n");
        printf("(1)Criar\n");
        printf("(2)Listar\n");
        printf("(3)Atualizar\n");
        printf("(4)Deletar\n");
        printf("(5)Sair\n");
        scanf("%d%*c", &i);
    } while ((i < 1) || (i > 5));
    if (i == 1) {
        salvarCliente(criaCliente());
    } else if (i == 2) {
        int codigoInicial;
        criaCodigo(" inicial para a busca de clientes", &codigoInicial);
        int codigoFinal;
        criaCodigo(" final para a busca de clientes", &codigoFinal);
        char sexo;
        criaSexo(&sexo);
        listarClientes(codigoInicial, codigoFinal, sexo);
    } else if (i == 3) {
        int codigo;
        criaCodigo(" da cliente que deseja atualizar", &codigo);
        atualizarCliente(criaCliente(), codigo);
    } else if (i == 4) {
        int codigo;
        criaCodigo(" da cliente que deseja deletar", &codigo);
        deletarClientePorCodigo(codigo);
    }

    return i == 5 ? 0 : i;
}

int menuFilme(void) {
    int i;
    do {
        printf("\nMENU FILME:\n");
        printf("Escolha uma Opcao:\n");
        printf("(1)Criar\n");
        printf("(2)Listar\n");
        printf("(3)Atualizar\n");
        printf("(4)Deletar\n");
        printf("(5)Sair\n");
        scanf("%d%*c", &i);

    } while ((i < 1) || (i > 5));
    if (i == 1) {
        salvarFilme(criaFilme());
    } else if (i == 2) {
        int codigoInicial;
        criaCodigo(" inicial para a busca de filmes", &codigoInicial);
        int codigoFinal;
        criaCodigo(" final para a busca de filmes", &codigoFinal);
        listarFilmes(codigoInicial, codigoFinal);
    } else if (i == 3) {
        int codigo;
        criaCodigo(" do filme que deseja atualizar", &codigo);
        atualizarFilme(criaFilme(), codigo);
    } else if (i == 4) {
        int codigo;
        criaCodigo(" do filme que deseja deletar", &codigo);
        deletarFilmePorCodigo(codigo);
    }

    return i == 5 ? 0 : i;
}

int menuCategoria(void) {
    int i;
    do {
        printf("\nMENU CATEGORIA:\n");
        printf("Escolha uma Opcao:\n");
        printf("(1)Criar\n");
        printf("(2)Listar\n");
        printf("(3)Atualizar\n");
        printf("(4)Deletar\n");
        printf("(5)Sair\n");

        scanf("%d%*c", &i);
    } while ((i < 1) || (i > 5));
    if (i == 1) {
        salvarCategoria(criaCategoria());
    } else if (i == 2) {
        listarCategorias();
    } else if (i == 3) {
        int codigo;
        criaCodigo(" da categoria que deseja atualizar", &codigo);
        atualizarCategoria(criaCategoria(), codigo);
    } else if (i == 4) {
        int codigo;
        criaCodigo(" da categoria que deseja deletar", &codigo);
        deletarCategoriaPorCodigo(codigo);
    }

    return i == 5 ? 0 : i;
}

int menuFuncionario(void) {
    int i;
    do {
        printf("\nMENU FUNCIONARIO:\n");
        printf("Escolha uma Opcao:\n");
        printf("(1)Criar\n");
        printf("(2)Listar\n");
        printf("(3)Atualizar\n");
        printf("(4)Deletar\n");
        printf("(5)Sair\n");

        scanf("%d%*c", &i);
    } while ((i < 1) || (i > 6));
    if (i == 1) {
        salvarFuncionario(criaFuncionario());
    } else if (i == 2) {
        listarFuncionarios();
    } else if (i == 3) {
        int codigo;
        criaCodigo(" do funcionario que deseja atualizar", &codigo);
        Funcionario funcionario = criaFuncionario();
        atualizarFuncionario(funcionario, codigo);
    } else if (i == 4) {
        int codigo;
        criaCodigo(" do funcionario que deseja deletar", &codigo);
        deletarFuncionarioPorCodigo(codigo);
    }
    return i == 5 ? 0 : i;
}

int menuFornecedor(void) {
    int i;
    do {
        printf("\nMENU FORNECEDOR:\n");
        printf("Escolha uma Opcao:\n");
        printf("(1)Criar\n");
        printf("(2)Listar\n");
        printf("(3)Atualizar\n");
        printf("(4)Deletar\n");
        printf("(5)Sair\n");

        scanf("%d%*c", &i);
    } while ((i < 1) || (i > 6));
    if (i == 1) {
        salvarFornecedor(criaFornecedor());
    } else if (i == 2) {
        listarFornecedores();
    } else if (i == 3) {
        int codigo;
        criaCodigo(" do fornecedor que deseja atualizar", &codigo);
        Fornecedor fornecedor = criaFornecedor();
        atualizarFornecedor(fornecedor, codigo);
    } else if (i == 4) {
        int codigo;
        criaCodigo(" do fornecedor que deseja deletar", &codigo);
        deletarFornecedorPorCodigo(codigo);
    }
    return i == 5 ? 0 : i;
}

int menuPrincipal(void) {
    int i;
    do {
        printf("\nMENU PRINCIPAL:\n");
        printf("Escolha uma Opcao:\n");
        printf("(1)Locadora\n");
        printf("(2)Cliente\n");
        printf("(3)Filme\n");
        printf("(4)Categoria\n");
        printf("(5)Funcionario\n");
        printf("(6)Fornecedor\n");
        printf("(7)Resetar Aplica????o\n");
        printf("(8)Exportar dados\n");
        printf("(9)Importar dados\n");
        printf("(10)Sair\n");

        scanf("%d%*c", &i);
    } while ((i < 1) || (i > 10));
    return i == 10 ? 0 : i;
}