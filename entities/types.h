#ifndef LOCADORA_ULTIMO_TYPES_H
#define LOCADORA_ULTIMO_TYPES_H

#include <stdbool.h>

 struct _Date {
    int day;
    int month;
    int year;
};
typedef struct _Date Date;

struct _Endereco{
    char rua[40];
    char numero[10];
    char complemento[20];
    char cidade[30];
    char UF[3];
};
typedef struct _Endereco Endereco;

struct _Locadora{
    char nomeFantasia[60];
    char razaoSocial[100];
    // XXXXXXXXX.XX-XX validar
    char inscricaoEstadual[19];
    // XX.XXX.XXX/XXXX-XX
    char CNPJ[19];
    Endereco endereco;
    // (XX) XXXXX-XXXX OU (XX) XXXX-XXXX validar
    char telefone[16];
    // bla@bla.com validar
    char email[100];
    char nomeDoResponsavel[60];
    // (XX) XXXXX-XXXX OU (XX) XXXX-XXXX validar
    char telefoneDoResponsavel[16];
} ;
typedef struct _Locadora Locadora;

 struct _Cliente{
    int codigo;
    char nome[60];
    Endereco endereco;
    // XXX.XXX.XXX-XX validar
    char CPF[15];
    // (XX) XXXXX-XXXX OU (XX) XXXX-XXXX validar
    char telefone[16];
    // bla@bla.com validar
    char email[100];
    // m f o
    char sexo;
    // solteiro, casado, separado, divorciado e viÃºvo.
    char estadoCivil[11];
    //  26/12/2004 validar
    char dataNascimento[11];
    bool ativo;
};
typedef struct _Cliente Cliente;

struct _Categoria {
    int codigo;
    // acao aventura comedia drama
    char descricao[20];
    float valorLocacao;
    bool ativo;
};
typedef struct _Categoria Categoria;

struct _Filme{
    int codigo;
    int codigoCategoria;
    char descricao[400];
    int exemplares;
    // portugues dublado OU ingles legendado
    char lingua[20];
    float impostoPorUnidade;
    float fretePorUnidade;
    float custoPorUnidade;
    float precoTotalPorUnidade;
    float valorDeLocacaoPorUnidade;
    bool ativo;
};
typedef struct _Filme Filme;

struct _Funcionario{
    int codigo;
    char nome[60];
    char cargo[30];
    Endereco endereco;
    // (XX) XXXXX-XXXX OU (XX) XXXX-XXXX validar
    char telefone[16];
    // bla@bla.com validar
    char email[100];
    bool ativo;
};
typedef struct _Funcionario Funcionario;

struct _Fornecedor {
    int codigo;
    char nomeFantasia[60];
    char razaoSocial[100];
    // XXXXXXXXX.XX-XX validar
    char inscricaoEstadual[19];
    // XX.XXX.XXX/XXXX-XX
    char CNPJ[19];
    Endereco endereco;
    // (XX) XXXXX-XXXX OU (XX) XXXX-XXXX validar
    char telefone[16];
    // bla@bla.com validar
    char email[100];
    bool ativo;
};
typedef struct _Fornecedor Fornecedor;

#endif //LOCADORA_ULTIMO_TYPES_H
