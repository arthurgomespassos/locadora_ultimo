#ifndef LOCADORA_ULTIMO_M_UTIL_H
#define LOCADORA_ULTIMO_M_UTIL_H

#include <stdbool.h>

// caminho relativo para a pasta que contém os dados binarios do programa
#define caminhoDosDados "../data/"

// caminho relativo para a pasta que contém os dados binarios do programa mas não tem o caractere '/' no seu final
#define caminhoDosDadosSemBarraNoFinal "../data"

// retorna true se arquivo existir e false se não existir
bool isArquivoExiste(char *caminhoCompletoDoArquivo);

// cria arquivo binario se ele não existir, ou limpa o arquivo binario se ele não existir
void resetaArquivoBinario(char *caminhoCompletoDoArquivo);

// abre um arquivo binario em modo de escrita wb e coloca um int com valor 0 nele
void resetaEColocaZeroEmArquivoBinario(char *caminhoCompletoDoArquivo);

// devolve a quantidade de registros que se tem atualmente na tabela
int obterQuantidadeDeTabela(char *nomeMinusculoDaTabela);

// incrementa a quantidade de registros que se tem atualmente na tabela em 1 e devolve a nova quantidade
int incrementaEObtemNovaQuantidadeDeTabela(char *nomeMinusculoDaTabela);

#endif //LOCADORA_ULTIMO_M_UTIL_H
