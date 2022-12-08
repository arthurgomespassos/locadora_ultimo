#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "m_xml.h"
#include "m_util.h"
#include "m_locadora.h"
#include "m_cliente.h"
#include "m_filme.h"
#include "m_categoria.h"
#include "m_funcionario.h"
#include "m_fornecedor.h"

void exportarXml(char *opcoes) {
    char *temLocadoraPtr = strstr(opcoes, "locadora");
    char *temClientePtr = strstr(opcoes, "cliente");
    char *temFilmePtr = strstr(opcoes, "filme");
    char *temCategoriaPtr = strstr(opcoes, "categoria");
    char *temFuncionarioPtr = strstr(opcoes, "funcionario");
    char *temFornecedorPtr = strstr(opcoes, "fornecedor");

    FILE *fp = fopen(caminhoCompletoDeExportacaoDoXml, "w");

    if (temLocadoraPtr != NULL) {
        exportarLocadora(fp);
    }
    if (temClientePtr != NULL) {
        exportarCliente(fp);
    }
    if (temFilmePtr != NULL) {
        exportarFilme(fp);
    }
    if (temCategoriaPtr != NULL) {
        exportarCategoria(fp);
    }
    if (temFuncionarioPtr != NULL) {
        exportarFuncionario(fp);
    }
    if (temFornecedorPtr != NULL) {
        exportarFornecedor(fp);
    }

    fclose(fp);
    fp = NULL;
}

void exportarLocadora(FILE *fp) {
    fprintf(fp, "<locadora>\n");
    Locadora locadora = obtemLocadoraDoDisco();
    exportaCampoString(fp, "<nomeFantasia>", locadora.nomeFantasia, "</nomeFantasia>");
    exportaCampoString(fp, "<razaoSocial>", locadora.razaoSocial, "</razaoSocial>");
    exportaCampoString(fp, "<inscricaoEstadual>", locadora.inscricaoEstadual, "</inscricaoEstadual>");
    exportaCampoString(fp, "<cnpj>", locadora.CNPJ, "</cnpj>");
    exportaEndereco(fp, locadora.endereco);
    exportaCampoString(fp, "<telefone>", locadora.telefone, "</telefone>");
    exportaCampoString(fp, "<email>", locadora.email, "</email>");
    exportaCampoString(fp, "<nomeDoResponsavel>", locadora.nomeDoResponsavel, "</nomeDoResponsavel>");
    exportaCampoString(fp, "<telefoneDoResponsavel>", locadora.telefoneDoResponsavel, "</telefoneDoResponsavel>");
    fprintf(fp, "</locadora>\n");
};

void exportarCliente(FILE *fp) {
    int qtdClientes = obterQuantidadeDeTabela("cliente");
    fprintf(fp, "<cliente qtd=%d>\n", qtdClientes);

    Cliente *clientes = obterClientes();

    for (int i = 0; i < qtdClientes; i++) {
        fprintf(fp, "<registro>\n");

        exportaCampoInt(fp, "<codigo>", clientes[i].codigo, "</codigo>");
        exportaCampoString(fp, "<nome>", clientes[i].nome, "</nome>");
        exportaEndereco(fp, clientes[i].endereco);
        exportaCampoString(fp, "<cpf>", clientes[i].CPF, "</cpf>");
        exportaCampoString(fp, "<telefone>", clientes[i].telefone, "</telefone>");
        exportaCampoString(fp, "<email>", clientes[i].email, "</email>");
        exportaCampoChar(fp, "<sexo>", clientes[i].sexo, "</sexo>");
        exportaCampoString(fp, "<estadoCivil>", clientes[i].estadoCivil, "</estadoCivil>");
        exportaCampoString(fp, "<dataNascimento>", clientes[i].dataNascimento, "</dataNascimento>");
        exportaCampoInt(fp, "<ativo>", clientes[i].ativo, "</ativo>");

        fprintf(fp, "</registro>\n");
    }

    free(clientes);
    clientes = NULL;

    fprintf(fp, "</cliente>\n");
}


void exportarFilme(FILE *fp) {
    int qtdFilmes = obterQuantidadeDeTabela("filme");
    fprintf(fp, "<filme qtd=%d>\n", qtdFilmes);

    Filme *filmes = obterFilmes();

    for (int i = 0; i < qtdFilmes; i++) {
        fprintf(fp, "<registro>\n");

        exportaCampoInt(fp, "<codigo>", filmes[i].codigo, "</codigo>");
        exportaCampoInt(fp, "<codigoCategoria>", filmes[i].codigoCategoria, "</codigoCategoria>");
        exportaCampoString(fp, "<descricao>", filmes[i].descricao, "</descricao>");
        exportaCampoInt(fp, "<exemplares>", filmes[i].exemplares, "</exemplares>");
        exportaCampoString(fp, "<lingua>", filmes[i].lingua, "</lingua>");
        exportaCampoFloat(fp,"<impostoPorUnidade>",filmes[i].impostoPorUnidade,"</impostoPorUnidade>");
        exportaCampoFloat(fp,"<fretePorUnidade>",filmes[i].fretePorUnidade,"</fretePorUnidade>");
        exportaCampoFloat(fp,"<custoPorUnidade>",filmes[i].custoPorUnidade,"</custoPorUnidade>");
        exportaCampoFloat(fp,"<precoTotalPorUnidade>",filmes[i].precoTotalPorUnidade,"</precoTotalPorUnidade>");
        exportaCampoFloat(fp,"<valorDeLocacaoPorUnidade>",filmes[i].valorDeLocacaoPorUnidade,"</valorDeLocacaoPorUnidade>");
        exportaCampoInt(fp, "<ativo>", filmes[i].ativo, "</ativo>");

        fprintf(fp, "</registro>\n");
    }

    free(filmes);
    filmes = NULL;

    fprintf(fp, "</filme>\n");
}

void exportarCategoria(FILE *fp) {
    int qtdCategorias = obterQuantidadeDeTabela("categoria");
    fprintf(fp, "<categoria qtd=%d>\n", qtdCategorias);

    Categoria *categorias = obterCategorias();

    for (int i = 0; i < qtdCategorias; i++) {
        fprintf(fp, "<registro>\n");

        exportaCampoInt(fp, "<codigo>", categorias[i].codigo, "</codigo>");
        exportaCampoString(fp, "<descricao>", categorias[i].descricao, "</descricao>");
        exportaCampoFloat(fp, "<valorLocacao>", categorias[i].valorLocacao, "</valorLocacao>");
        exportaCampoInt(fp, "<ativo>", categorias[i].ativo, "</ativo>");

        fprintf(fp, "</registro>\n");
    }

    free(categorias);
    categorias = NULL;

    fprintf(fp, "</categoria>\n");
}

void exportarFuncionario(FILE *fp) {
    int qtdfuncionarios = obterQuantidadeDeTabela("funcionario");
    fprintf(fp, "<funcionario qtd=%d>\n", qtdfuncionarios);

    Funcionario *funcionarios = obterFuncionarios();

    for (int i = 0; i < qtdfuncionarios; i++) {
        fprintf(fp, "<registro>\n");

        exportaCampoInt(fp, "<codigo>", funcionarios[i].codigo, "</codigo>");
        exportaCampoString(fp, "<nome>", funcionarios[i].nome, "</nome>");
        exportaCampoString(fp, "<cargo>", funcionarios[i].cargo, "</cargo>");
        exportaEndereco(fp, funcionarios[i].endereco);
        exportaCampoString(fp, "<telefone>", funcionarios[i].telefone, "</telefone>");
        exportaCampoString(fp, "<email>", funcionarios[i].email, "</email>");
        exportaCampoInt(fp, "<ativo>", funcionarios[i].ativo, "</ativo>");

        fprintf(fp, "</registro>\n");
    }

    free(funcionarios);
    funcionarios = NULL;

    fprintf(fp, "</funcionario>\n");
}

void exportarFornecedor(FILE *fp) {
    int qtdfornecedores = obterQuantidadeDeTabela("fornecedor");
    fprintf(fp, "<fornecedor qtd=%d>\n", qtdfornecedores);

    Fornecedor *fornecedores = obterFornecedores();

    for (int i = 0; i < qtdfornecedores; i++) {
        fprintf(fp, "<registro>\n");

        exportaCampoInt(fp, "<codigo>", fornecedores[i].codigo, "</codigo>");
        exportaCampoString(fp, "<nomeFantasia>", fornecedores[i].nomeFantasia, "</nomeFantasia>");
        exportaCampoString(fp, "<razaoSocial>", fornecedores[i].razaoSocial, "</razaoSocial>");
        exportaCampoString(fp, "<inscricaoEstadual>", fornecedores[i].inscricaoEstadual, "</inscricaoEstadual>");
        exportaCampoString(fp, "<cnpj>", fornecedores[i].CNPJ, "</cnpj>");
        exportaEndereco(fp, fornecedores[i].endereco);
        exportaCampoString(fp, "<telefone>", fornecedores[i].telefone, "</telefone>");
        exportaCampoString(fp, "<email>", fornecedores[i].email, "</email>");
        exportaCampoInt(fp, "<ativo>", fornecedores[i].ativo, "</ativo>");

        fprintf(fp, "</registro>\n");
    }

    free(fornecedores);
    fornecedores = NULL;

    fprintf(fp, "</fornecedor>\n");
}


void exportaCampoFloat(FILE *fp, char *nomeDaTagDeAbertura, float campo, char *nomeDaTagDeFechamento) {
    fprintf(fp, "%s%f%s\n", nomeDaTagDeAbertura, campo, nomeDaTagDeFechamento);
}

void exportaCampoChar(FILE *fp, char *nomeDaTagDeAbertura, char campo, char *nomeDaTagDeFechamento) {
    fprintf(fp, "%s%c%s\n", nomeDaTagDeAbertura, campo, nomeDaTagDeFechamento);
}

void exportaCampoInt(FILE *fp, char *nomeDaTagDeAbertura, int campo, char *nomeDaTagDeFechamento) {
    fprintf(fp, "%s%d%s\n", nomeDaTagDeAbertura, campo, nomeDaTagDeFechamento);
}

void exportaCampoString(FILE *fp, char *nomeDaTagDeAbertura, char *campo, char *nomeDaTagDeFechamento) {
    fprintf(fp, "%s%s%s\n", nomeDaTagDeAbertura, campo, nomeDaTagDeFechamento);
}

void exportaEndereco(FILE *fp, Endereco endereco) {
    exportaCampoString(fp, "<rua>", endereco.rua, "</rua>");
    exportaCampoString(fp, "<numero>", endereco.numero, "</numero>");
    exportaCampoString(fp, "<complemento>", endereco.complemento, "</complemento>");
    exportaCampoString(fp, "<cidade>", endereco.cidade, "</cidade>");
    exportaCampoString(fp, "<uf>", endereco.UF, "</uf>");
}