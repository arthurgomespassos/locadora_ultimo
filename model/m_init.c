#include <stdio.h>
#include "m_init.h"
#include "m_util.h"

#define qtdDeArquivosDeQuantidade 5
#define qtdDeArquivosDeTabela 6


// armazena o nome dos arquivos que armazenam as quantidades dos itens das tabelas
char nomesDosArquivosDeQuantidade[qtdDeArquivosDeQuantidade][50] = {
        caminhoDosDados"clienteQtd.bin",
        caminhoDosDados"categoriaQtd.bin",
        caminhoDosDados"filmeQtd.bin",
        caminhoDosDados"funcionarioQtd.bin",
        caminhoDosDados"fornecedorQtd.bin"
};

// cada um desses arquivos armazena os dados da tabela correpondentes aos seus respectivos nomes
char nomesDosArquivosDeTabela[qtdDeArquivosDeTabela][50] = {
        caminhoDosDados"locadora.bin",
        caminhoDosDados"cliente.bin",
        caminhoDosDados"categoria.bin",
        caminhoDosDados"filme.bin",
        caminhoDosDados"funcionario.bin",
        caminhoDosDados"fornecedor.bin"
};

void init(void) {
    // cria os arquivos que faltam referentes as quantidades
    for (int i = 0; i < qtdDeArquivosDeQuantidade; i++)
        if (!isArquivoExiste(nomesDosArquivosDeQuantidade[i]))
            resetaEColocaZeroEmArquivoBinario(nomesDosArquivosDeQuantidade[i]);

    // cria os arquivos que faltam referentes as tabelas
    for (int i = 0; i < qtdDeArquivosDeTabela; i++)
        if (!isArquivoExiste(nomesDosArquivosDeTabela[i]))
            resetaArquivoBinario(nomesDosArquivosDeTabela[i]);
}

void deletaTodosOsArquivosBinarios(void) {
    for (int i = 0; i < qtdDeArquivosDeQuantidade; i++)
        if (isArquivoExiste(nomesDosArquivosDeQuantidade[i]))
            remove(nomesDosArquivosDeQuantidade[i]);

    for (int i = 0; i < qtdDeArquivosDeTabela; i++)
        if (isArquivoExiste(nomesDosArquivosDeTabela[i]))
            remove(nomesDosArquivosDeTabela);
}
