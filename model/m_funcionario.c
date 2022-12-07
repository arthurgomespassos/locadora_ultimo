#include <stdio.h>
#include <stdlib.h>
#include "m_funcionario.h"
#include "m_util.h"

void salvarFuncionario(Funcionario funcionario){
    funcionario.codigo = incrementaEObtemNovaQuantidadeDeTabela("funcionario");

    FILE *fp = fopen(caminhoDosDados"funcionario.bin", "ab");
    if (fp == NULL) {
        printf("Erro em salvarFuncionario");
        exit(1);
    }

    fwrite(&funcionario, sizeof(Funcionario), 1, fp);

    fclose(fp);
    fp = NULL;
}

Funcionario *obterFuncionarios(void) {
    FILE *fp = fopen(caminhoDosDados"funcionario.bin", "rb");
    if (fp == NULL) {
        printf("Erro em obterFuncionarios");
        exit(1);
    }

    int funcionarioQtd = obterQuantidadeDeTabela("funcionario");
    Funcionario *funcionarios = malloc(sizeof(Funcionario) * funcionarioQtd);
    fread(funcionarios, sizeof(Funcionario), funcionarioQtd, fp);

    fclose(fp);
    fp = NULL;

    return funcionarios;
}

void atualizarFuncionario(Funcionario funcionario, int codigo) {
    funcionario.codigo = codigo;

    int funcionarioQtd = obterQuantidadeDeTabela("funcionario");
    Funcionario *funcionarios = obterFuncionarios();

    for (int i = 0; i < funcionarioQtd; i++) {
        if (funcionario.codigo == funcionarios[i].codigo) {
            funcionarios[i] = funcionario;
            break;
        }
    }

    FILE *fp = fopen(caminhoDosDados"funcionario.bin", "wb");
    if (fp == NULL) {
        printf("Erro em atualizarFuncionario");
        exit(1);
    }

    fwrite(funcionarios, sizeof(Funcionario), funcionarioQtd, fp);

    fclose(fp);
    fp = NULL;

    free(funcionarios);
    funcionarios = NULL;
}

void deletarFuncionarioPorCodigo(int codigo) {
    int funcionarioQtd = obterQuantidadeDeTabela("funcionario");
    Funcionario *funcionarios = obterFuncionarios();

    for (int i = 0; i < funcionarioQtd; i++) {
        if (codigo == funcionarios[i].codigo) {
            funcionarios[i].ativo = false;
            break;
        }
    }

    FILE *fp = fopen(caminhoDosDados"funcionario.bin", "wb");
    if (fp == NULL) {
        printf("Erro em deletarFuncionarioPorCodigo");
        exit(1);
    }

    fwrite(funcionarios, sizeof(Funcionario), funcionarioQtd, fp);

    fclose(fp);
    fp = NULL;

    free(funcionarios);
    funcionarios = NULL;
}