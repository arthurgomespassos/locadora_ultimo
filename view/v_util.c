#include "v_util.h"
#include "../entities/types.h"

#include <stdio.h>

void criaNome(char *string, char *nome) {
    printf("Digite o nome%s: ", string);
    fgets(nome, 60, stdin);
}

void criaRazaoSocial(char *razaoSocial) {
    printf("Digite a razao social: ");
    fgets(razaoSocial, 100, stdin);
}

void criaInscricaoEstadual(char *inscricaoEstadual) {
    printf("Digite a inscricao estadual: ");
    fgets(inscricaoEstadual, 19 , stdin);
}

void criaCnpj(char *cnpj) {
    printf("Digite o Cnpj: ");
    fgets(cnpj, 19 , stdin);
}

Endereco criaEndereco() {
    Endereco endereco;

    printf("Digite o nome da rua: ");
    fgets(endereco.rua, 40, stdin);
    printf("Digite o numero: ");
    fgets(endereco.numero, 10, stdin);
    printf("Digite o complemento: ");
    fgets(endereco.complemento, 20, stdin);
    printf("Digite a cidade: ");
    fgets(endereco.cidade, 30, stdin);
    printf("Digite a UF: ");
    fgets(endereco.UF, 3, stdin);

    return endereco;
}

void criaTelefone(char *telefone) {
    printf("Digite o telefone: ");
    fgets(telefone, 16 , stdin);
}

void criaEmail(char *email) {
    printf("Digite o email: ");
    fgets(email, 100, stdin);
}

void criaNomeFantasia(char *nome) {
    return criaNome(" fantasia", nome);
}

void criaNomeDoResponsavel(char *nome) {
    return criaNome(" do responsavel", nome);
}

void criaTelefonedoResponsavel(char *telefone) {
    printf("Digite o telefone do responsavel: ");
    fgets(telefone, 16 ,stdin);
}

void criaCodigo(int *codigo) {
    printf("Digite o codigo: ");
    scanf("%d%*c", codigo);
}

void criaCpf(char *cpf) {
    printf("Digite o cpf: ");
    fgets(cpf, 15 ,stdin);
}

void criaSexo(char *sexo) {
    printf("Digite o sexo: ");
    scanf("%c%*c", sexo);
}

void criaEstadoCivil(char *estadoCivil) {
    printf("Digite o estado civil: ");
    fgets(estadoCivil, 11 ,stdin);
}

void criaDataDeNascimento(char *dataDeNascimento) {
    printf("Digite a data de nascimento: ");
    fgets(dataDeNascimento, 11, stdin);
}


void criaExemplares(int *exemplares) {
    printf("Digite a quantidade de exemplares: ");
    scanf("%d%*c", exemplares);
}

void criaDescricao(char *descricao) {
    printf("Digite a descricao: ");
    fgets(descricao, 400, stdin);
}

void criaLinguaDoFilme(char *lingua) {
    printf("Lingua: ");
    fgets(lingua, 20, stdin);
}

void criaValorLocacao(float *valorLocacao) {
    printf("Valor: ");
    scanf("%f%*c", valorLocacao);
}

void criaCargo(char *cargo) {
    printf("Cargo: ");
    fgets(cargo, 30, stdin);
}

void exibeNome(char *nome) {
    printf("Nome: %s\n", nome);
}

void exibeNomeFantasia(char *nome) {
    printf("Nome Fantasia: %s\n", nome);
}

void exibeRazaoSocial(char *razaoSocial) {
    printf("Razao Social: %s\n", razaoSocial);
}

void exibeInscricaoEstadual(char *inscricaoEstadual) {
    printf("Inscricao Estadual: %s\n", inscricaoEstadual);
}

void exibeCnpj(char *cnpj) {
    printf("CNPJ: %s\n", cnpj);
}

void exibeEndereco(Endereco endereco) {
    printf("Rua: %s\n", endereco.rua);
    printf("Numero: %s\n", endereco.numero);
    printf("Complemento: %s\n", endereco.complemento);
    printf("Cidade: %s\n", endereco.cidade);
    printf("UF: %s\n", endereco.UF);
}

void exibeTelefone(char *telefone) {
    printf("Telefone: %s\n", telefone);
}

void exibeEmail(char *email) {
    printf("Email: %s\n", email);
}

void exibeNomeDoResponsavel(char *nomedoResponsavel) {
    printf("Nome do Responsavel: %s\n", nomedoResponsavel);
}

void exibeTelefoneDoResponsavel(char *telefoneDoResponsavel) {
    printf("Telefone do Responsavel: %s\n", telefoneDoResponsavel);
}

void exibeCodigo(int codigo) {
    printf("Codigo: %d\n", codigo);
}

void exibeCpf(char *cpf) {
    printf("Cpf: %s\n", cpf);
}

void exibeSexo(char sexo) {
    if (sexo == 'm' || sexo == 'M')
        printf("Sexo: %s", "masculino\n");
    else
        printf("Sexo: %s", "feminino\n");
}

void exibeEstadoCivil(char *estadoCivil) {
    printf("Estado Civil: %s\n", estadoCivil);
}

void exibeDataDeNascimento(char *dataDeNascimento) {
    printf("Data de Nascimento: %s\n", dataDeNascimento);
}

void exibeExemplares(int exemplares) {
    printf("Exemplares: %d\n", exemplares);
}

void exibeDescricao(char *descricao) {
    printf("Descricao: %s\n", descricao);
}

void exibeLingua(char *lingua) {
    printf("Lingua: %s\n", lingua);
}

void exibeValorLocacao(float valorLocacao) {
    printf("Valor da locacao: %f\n", valorLocacao);
}

void exibeCargo(char *cargo) {
    printf("Cargo: %s\n", cargo);
}