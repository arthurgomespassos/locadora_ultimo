#include <stdio.h>
#include <stdlib.h>
#include "v_cliente.h"
#include "v_util.h"
#include "../model/m_util.h"
#include "../model/m_cliente.h"

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
    cliente.codigo = 1; // este é um valor sem importancia que só existe na criação da categoria para evitar comportamentos inesperados
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

void listarClientes(int codigoInicial, int codigoFinal, char sexo) {
    int clienteQtd = obterQuantidadeDeTabela("cliente");
    Cliente *clientes = obterClientes();

    for (int i = 0; i < clienteQtd; i++) {
        if (!clientes[i].ativo) continue;
        if (clientes[i].sexo != sexo) continue;
        if (clientes[i].codigo < codigoInicial) continue;
        if (clientes[i].codigo > codigoFinal) continue;

        exibeCliente(clientes[i]);
    }

    free(clientes);
    clientes = NULL;
}

