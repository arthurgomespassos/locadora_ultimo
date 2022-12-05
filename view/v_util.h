#ifndef LOCADORA_ULTIMO_V_UTIL_H
#define LOCADORA_ULTIMO_V_UTIL_H

#include "../entities/types.h"

// essa função teve de ser criada para limpar o buffer de teclado pois o setbuf(stdin, NULL), estava dando erro em alguns casos
// essa função consome o buffer de teclado e zera o buffer.
void limpa_buffer_de_teclado(void);

void criaNome(char *string, char *nome);

void criaRazaoSocial(char *razaoSocial);

void criaInscricaoEstadual(char *inscricaoEstadual);

void criaCnpj(char *cnpj);

Endereco criaEndereco();

void criaTelefone(char *telefone);

void criaEmail(char *email);

void criaNomeFantasia(char *nome);

void criaNomeDoResponsavel(char *nome);

void criaTelefonedoResponsavel(char *telefone);

void criaCodigo(char *string, int *codigo);

void criaCpf(char *cpf);

void criaSexo(char *sexo);

void criaEstadoCivil(char *estadoCivil);

void criaDataDeNascimento(char *dataDeNascimento);

void exibeNome(char *nome);

void exibeNomeFantasia(char *nome);

void exibeRazaoSocial(char *razaoSocial);

void exibeInscricaoEstadual(char *inscricaoEstadual);

void exibeCnpj(char *cnpj);

void exibeEndereco(Endereco endereco);

void exibeTelefone(char *telefone);

void exibeEmail(char *email);

void exibeNomeDoResponsavel(char *nomedoResponsavel);

void exibeTelefoneDoResponsavel(char *telefoneDoResponsavel);

void exibeCodigo(int codigo);

void exibeCpf(char *cpf);

void exibeSexo(char sexo);

void exibeEstadoCivil(char *estadoCivil);

void exibeDataDeNascimento(char *dataDeNascimento);

void criaExemplares(int *exemplares);

void criaDescricao(char *descricao);

void criaLinguaDoFilme(char *lingua);

void exibeExemplares(int exemplares);

void exibeDescricao(char *descricao);

void exibeLingua(char *lingua);

void criaValorLocacao(float *valorLocacao);

void exibeValorLocacao(float valorLocacao);

void criaCargo(char *cargo);

void exibeCargo(char *cargo);

#endif //LOCADORA_ULTIMO_V_UTIL_H
