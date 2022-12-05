#ifndef LOCADORA_ULTIMO_STRING_UTIL_H
#define LOCADORA_ULTIMO_STRING_UTIL_H

#include <stdbool.h>

// verifica se o inicio da string contém \n, espaço em branco, ou \t
bool precisaLimparInicioDaString(char *str);

// verifica se o fim da string contém \n, espaço em branco, ou \t
bool precisaLimparFimDaString(char *str);

// remove os caracteres \t \n e espaço no inicio e fim da string se houver
void limpaString(char *str);


#endif //LOCADORA_ULTIMO_STRING_UTIL_H
