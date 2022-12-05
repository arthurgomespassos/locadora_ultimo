#include "v_util.h"
#include "../string_utils/string_util.h"

#include <stdio.h>

void limpa_buffer_de_teclado(void) {
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void criaNome(char *string, char *nome) {
    printf("Digite o nome%s: ", string);
    fgets(nome, 60, stdin);
    limpaString(nome);
    limpa_buffer_de_teclado();
}

void criaRazaoSocial(char *razaoSocial) {
    printf("Digite a razao social: ");
    fgets(razaoSocial, 100, stdin);
    limpaString(razaoSocial);
    limpa_buffer_de_teclado();
}

void criaInscricaoEstadual(char *inscricaoEstadual) {
    printf("Digite a inscricao estadual: ");
    fgets(inscricaoEstadual, 19, stdin);
    limpaString(inscricaoEstadual);
    limpa_buffer_de_teclado();
}

void criaCnpj(char *cnpj) {
    printf("Digite o Cnpj: ");
    fgets(cnpj, 19, stdin);
    limpaString(cnpj);
    limpa_buffer_de_teclado();
}

Endereco criaEndereco() {
    Endereco endereco;

    printf("Digite o nome da rua: ");
    fgets(endereco.rua, 40, stdin);
    limpaString(endereco.rua);
    limpa_buffer_de_teclado();

    printf("Digite o numero: ");
    fgets(endereco.numero, 10, stdin);
    limpaString(endereco.numero);
    limpa_buffer_de_teclado();

    printf("Digite o complemento: ");
    fgets(endereco.complemento, 20, stdin);
    limpaString(endereco.complemento);
    limpa_buffer_de_teclado();

    printf("Digite a cidade: ");
    fgets(endereco.cidade, 30, stdin);
    limpaString(endereco.cidade);
    limpa_buffer_de_teclado();

    printf("Digite a UF: ");
    fgets(endereco.UF, 3, stdin);
    limpaString(endereco.UF);
    limpa_buffer_de_teclado();

    return endereco;
}

void criaTelefone(char *telefone) {
    printf("Digite o telefone: ");
    fgets(telefone, 16, stdin);
    limpaString(telefone);
    limpa_buffer_de_teclado();
}

void criaEmail(char *email) {
    printf("Digite o email: ");
    fgets(email, 100, stdin);
    limpaString(email);
    limpa_buffer_de_teclado();
}

void criaNomeFantasia(char *nome) {
    return criaNome(" fantasia", nome);
}

void criaNomeDoResponsavel(char *nome) {
    return criaNome(" do responsavel", nome);
}

void criaTelefonedoResponsavel(char *telefone) {
    printf("Digite o telefone do responsavel: ");
    fgets(telefone, 16, stdin);
    limpaString(telefone);
    limpa_buffer_de_teclado();
}

void criaCodigo(char *string, int *codigo) {
    printf("Digite o codigo%s:", string);
    scanf("%d%*c", codigo);
    limpa_buffer_de_teclado();
}

void criaCpf(char *cpf) {
    printf("Digite o cpf: ");
    fgets(cpf, 15, stdin);
    limpaString(cpf);
    limpa_buffer_de_teclado();
}

void criaSexo(char *sexo) {
    printf("Digite o sexo: ");
    scanf("%c%*c", sexo);
    limpaString(sexo);
    limpa_buffer_de_teclado();
}

void criaEstadoCivil(char *estadoCivil) {
    printf("Digite o estado civil: ");
    fgets(estadoCivil, 11, stdin);
    limpaString(estadoCivil);
    limpa_buffer_de_teclado();
}

void criaDataDeNascimento(char *dataDeNascimento) {
    printf("Digite a data de nascimento: ");
    fgets(dataDeNascimento, 11, stdin);
    limpaString(dataDeNascimento);
    limpa_buffer_de_teclado();
}


void criaExemplares(int *exemplares) {
    printf("Digite a quantidade de exemplares: ");
    scanf("%d%*c", exemplares);
    limpa_buffer_de_teclado();
}

void criaDescricao(char *descricao) {
    printf("Digite a descricao: ");
    fgets(descricao, 400, stdin);
    limpaString(descricao);
    limpa_buffer_de_teclado();
}

void criaLinguaDoFilme(char *lingua) {
    printf("Lingua: ");
    fgets(lingua, 20, stdin);
    limpaString(lingua);
    limpa_buffer_de_teclado();
}

void criaValorLocacao(float *valorLocacao) {
    printf("Valor: ");
    scanf("%f%*c", valorLocacao);
    limpa_buffer_de_teclado();
}

void criaCargo(char *cargo) {
    printf("Cargo: ");
    fgets(cargo, 30, stdin);
    limpaString(cargo);
    limpa_buffer_de_teclado();
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