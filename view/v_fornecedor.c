#include <stdio.h>
#include "v_fornecedor.h"
#include "v_util.h"

void exibeFornecedor(Fornecedor fornecedor) {
    printf("\nDados do fornecedor:\n");
    exibeCodigo(fornecedor.codigo);
    exibeNomeFantasia(fornecedor.nomeFantasia);
    exibeRazaoSocial(fornecedor.razaoSocial);
    exibeInscricaoEstadual(fornecedor.inscricaoEstadual);
    exibeCnpj(fornecedor.CNPJ);
    exibeEndereco(fornecedor.endereco);
    exibeTelefone(fornecedor.telefone);
    exibeEmail(fornecedor.email);
}

Fornecedor criaFornecedor(void) {
    Fornecedor fornecedor;

    printf("\nDigite os dados do fornecedor...\n");
    fornecedor.codigo = 1; // TODO mudar depois
    criaNomeFantasia(fornecedor.nomeFantasia);
    criaInscricaoEstadual(fornecedor.inscricaoEstadual);
    criaRazaoSocial(fornecedor.razaoSocial);
    criaCnpj(fornecedor.CNPJ);
    fornecedor.endereco = criaEndereco();
    criaTelefone(fornecedor.telefone);
    criaEmail(fornecedor.email);
    fornecedor.ativo = true;
    return fornecedor;
}