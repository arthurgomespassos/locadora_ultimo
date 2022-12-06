#include <stdio.h>
#include <stdlib.h>
#include "m_cliente.h"
#include "m_util.h"

void salvarCliente(Cliente cliente){
    cliente.codigo = incrementaEObtemNovaQuantidadeDeTabela("cliente");

    FILE *fp = fopen(caminhoDosDados"cliente.bin", "ab");
    if (fp == NULL) {
        printf("Erro em salvarCliente");
        exit(1);
    }

    fwrite(&cliente, sizeof(Cliente), 1, fp);

    fclose(fp);
    fp = NULL;
}

Cliente *obterClientes(void) {
    FILE *fp = fopen(caminhoDosDados"cliente.bin", "rb");
    if (fp == NULL) {
        printf("Erro em obterClientes");
        exit(1);
    }

    int clienteQtd = obterQuantidadeDeTabela("cliente");
    Cliente *clientes = malloc(sizeof(Cliente) * clienteQtd);
    fread(clientes, sizeof(Cliente), clienteQtd, fp);

    fclose(fp);
    fp = NULL;

    return clientes;
}


void atualizarCliente(Cliente cliente, int codigo) {
    cliente.codigo = codigo;

    int clienteQtd = obterQuantidadeDeTabela("cliente");
    Cliente *clientes = obterClientes();

    for (int i = 0; i < clienteQtd; i++) {
        if (cliente.codigo == clientes[i].codigo) {
            clientes[i] = cliente;
            break;
        }
    }

    FILE *fp = fopen(caminhoDosDados"cliente.bin", "wb");
    if (fp == NULL) {
        printf("Erro em atualizarCliente");
        exit(1);
    }

    fwrite(clientes, sizeof(Cliente), clienteQtd, fp);

    fclose(fp);
    fp = NULL;

    free(clientes);
    clientes = NULL;
}

void deletarClientePorCodigo(int codigo) {
    int clienteQtd = obterQuantidadeDeTabela("cliente");
    Cliente *clientes = obterClientes();

    for (int i = 0; i < clienteQtd; i++) {
        if (codigo == clientes[i].codigo) {
            clientes[i].ativo = false;
            break;
        }
    }

    FILE *fp = fopen(caminhoDosDados"cliente.bin", "wb");
    if (fp == NULL) {
        printf("Erro em deletarClientePorCodigo");
        exit(1);
    }

    fwrite(clientes, sizeof(Cliente), clienteQtd, fp);

    fclose(fp);
    fp = NULL;

    free(clientes);
    clientes = NULL;
}