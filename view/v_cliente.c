#include <stdio.h>
#include "v_cliente.h"
#include "v_util.h"

void exibeCliente(Cliente cliente) {
    printf("\nDados do Cliente:\n");
    exibeCodigo(cliente.codigo);
    exibeNome(cliente.nome);
    exibeEndereco(cliente.endereco);
    exibeCpf(cliente.CPF);
    exibeTelefone(cliente.telefone);
    exibeEmail(cliente.email);
    exibeSexo(cliente.sexo);
    exibeEstadoCivil(cliente.estadoCivil);
    exibeDataDeNascimento(cliente.dataNascimento);
}

Cliente criaCliente(void) {
    limpa_buffer_de_teclado();

    Cliente cliente;

    printf("\nDigite os dados do Cliente...\n");
    cliente.codigo = 1; // TODO getUltimoCliente().codigo + 1;
    criaNome("", cliente.nome);
    cliente.endereco = criaEndereco();
    criaCpf(cliente.CPF);
    criaTelefone(cliente.telefone);
    criaEmail(cliente.email);
    criaSexo(&cliente.sexo);
    criaEstadoCivil(cliente.estadoCivil);
    criaDataDeNascimento(cliente.dataNascimento);
    cliente.ativo = true;

    return cliente;
}