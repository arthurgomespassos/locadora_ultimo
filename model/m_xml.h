#ifndef LOCADORA_ULTIMO_M_XML_H
#define LOCADORA_ULTIMO_M_XML_H

#include "../entities/types.h"

// exporta os dados da aplicação de acordo com a string de opções rebida
void exportarXml(char *opcoes);

// exporta apenas os dados da locadora para o xml
void exportarLocadora(FILE *fp);

// exporta todos os clientes da aplicação
void exportarCliente(FILE *fp);

// exporta todos os filmes da aplicacao
void exportarFilme(FILE *fp);

// exporta todas as categorias da aplicação
void exportarCategoria(FILE *fp);

// exporta todos os funcionarios da aplicação
void exportarFuncionario(FILE *fp);

// exporta todos os fornecedores da aplicação
void exportarFornecedor(FILE *fp);

void exportaCampoFloat(FILE *fp, char *nomeDaTagDeAbertura, float campo, char *nomeDaTagDeFechamento);

void exportaCampoChar(FILE *fp, char *nomeDaTagDeAbertura, char campo, char *nomeDaTagDeFechamento);

void exportaCampoInt(FILE *fp, char *nomeDaTagDeAbertura, int campo, char *nomeDaTagDeFechamento);

void exportaCampoString(FILE *fp, char *nomeDaTagDeAbertura, char *campo, char *nomeDaTagDeFechamento);

void exportaEndereco(FILE *fp, Endereco endereco);

#endif //LOCADORA_ULTIMO_M_XML_H
