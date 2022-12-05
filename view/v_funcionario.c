#include <stdio.h>
#include "v_funcionario.h"
#include "v_util.h"

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
    funcionario.codigo = 1; // TODO getUltimoCliente().codigo + 1;
    criaNome("" ,funcionario.nome);
    criaCargo(funcionario.cargo);
    criaEndereco(funcionario.endereco);
    criaTelefone(funcionario.telefone);
    criaEmail(funcionario.email);
    funcionario.ativo = true;

    return funcionario;
}