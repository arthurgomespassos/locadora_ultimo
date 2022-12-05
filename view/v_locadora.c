#include <stdio.h>
#include "v_locadora.h"
#include "v_util.h"

void exibeLocadora(Locadora locadora) {
    printf("\nDados da locadora:\n");
    exibeNomeFantasia(locadora.nomeFantasia);
    exibeRazaoSocial(locadora.razaoSocial);
    exibeInscricaoEstadual(locadora.inscricaoEstadual);
    exibeCnpj(locadora.CNPJ);
    exibeEndereco(locadora.endereco);
    exibeTelefone(locadora.telefone);
    exibeEmail(locadora.email);
    exibeNomeDoResponsavel(locadora.nomeDoResponsavel);
    exibeTelefoneDoResponsavel(locadora.telefoneDoResponsavel);
}

Locadora criaLocadora(void) {
    Locadora locadora;

    printf("\nDigite os dados da Locadora...\n");
    criaNomeFantasia(locadora.nomeFantasia);
    criaInscricaoEstadual(locadora.inscricaoEstadual);
    criaRazaoSocial(locadora.razaoSocial);
    criaCnpj(locadora.CNPJ);
    locadora.endereco = criaEndereco();
    criaTelefone(locadora.telefone);
    criaEmail(locadora.email);
    criaNomeDoResponsavel(locadora.nomeDoResponsavel);
    criaTelefonedoResponsavel(locadora.telefoneDoResponsavel);
    return locadora;
}