#ifndef LOCADORA_ULTIMO_M_UTIL_H
#define LOCADORA_ULTIMO_M_UTIL_H

#include <stdbool.h>

// caminho relativo para a pasta que contém os dados binarios do programa
#define caminhoDosDados "../data/"

// retorna true se arquivo existir e false se não existir
bool isArquivoExiste(char *caminhoCompletoDoArquivo);

// cria arquivo binario se ele não existir, ou limpa o arquivo binario se ele não existir
void resetaArquivoBinario(char *caminhoCompletoDoArquivo);

// abre um arquivo binario em modo de escrita wb e coloca um int com valor 0 nele
void resetaEColocaZeroEmArquivoBinario(char *caminhoCompletoDoArquivo);


#endif //LOCADORA_ULTIMO_M_UTIL_H
