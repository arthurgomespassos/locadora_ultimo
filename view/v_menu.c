#include "v_menu.h"
#include "../entities/types.h"
#include "v_locadora.h"
#include "v_cliente.h"
#include "v_categoria.h"
#include "v_funcionario.h"
#include "v_fornecedor.h"
#include "../model/m_locadora.h"
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
        salvaOuAtualizaLocadora(criaLocadora());
    } else if (i == 2) {
        exibeLocadora(obtemLocadoraDoDisco());
    } else if (i == 3) {
        salvaOuAtualizaLocadora(criaLocadora());
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
        exibeCliente(criaCliente());
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
        exibeCategoria(criaCategoria());
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
        exibeFunionario(criaFuncionario());
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
        exibeFornecedor(criaFornecedor());
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
        printf("(7)Salvar\n");
        printf("(8)Sair\n");

        scanf("%d%*c", &i);
    } while ((i < 1) || (i > 8));
    return i == 8 ? 0 : i;
}