#include <stdio.h>
#include <stdlib.h>
#include "v_funcionario.h"
#include "v_util.h"
#include "../model/m_util.h"
#include "../model/m_funcionario.h"

void exibeFunionario(Funcionario funcionario) {
    printf("\nDados do Funcionario:\n");
    exibeCodigo(funcionario.codigo);
    exibeNome(funcionario.nome);
    exibeCargo(funcionario.cargo);
    exibeEndereco(funcionario.endereco);
    exibeTelefone(funcionario.telefone);
    exibeEmail(funcionario.email);
}

Funcionario criaFuncionario(void) {
    Funcionario funcionario;

    printf("\nDigite os dados do Funcionario...\n");
    funcionario.codigo = 1; // este é um valor sem importancia que só existe para evitar comportamentos inesperados
    criaNome("", funcionario.nome);
    criaCargo(funcionario.cargo);
    funcionario.endereco = criaEndereco(funcionario.endereco);
    criaTelefone(funcionario.telefone);
    criaEmail(funcionario.email);
    funcionario.ativo = true;

    return funcionario;
}

void listarFuncionarios(void) {
    int funcionarioQtd = obterQuantidadeDeTabela("funcionario");
    Funcionario *funcionarios = obterFuncionarios();

    for (int i = 0; i < funcionarioQtd; i++) {
        if (!funcionarios[i].ativo) continue;

        exibeFunionario(funcionarios[i]);
    }

    free(funcionarios);
    funcionarios = NULL;
}
