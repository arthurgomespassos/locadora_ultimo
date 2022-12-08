#include <string.h>
#include "string_util.h"

bool precisaLimparInicioDaString(char *str) {
    if (str[0] == '\n' || str[0] == '\t' || str[0] == ' ') return true;
    return false;
}

bool precisaLimparFimDaString(char *str) {
    int posicaoDoUltimoCaractere = (int) strlen(str) - 1;
    if (str[posicaoDoUltimoCaractere] == '\n' || str[posicaoDoUltimoCaractere] == '\t' ||
        str[posicaoDoUltimoCaractere] == ' ')
        return true;
    return false;
}

void limpaString(char *str) {
    // limpa o início da string
    while (precisaLimparInicioDaString(str)) {
        int posicaoDoCaractereTerminador = (int) strlen(str);
        char novaString[1000] = "";

        for (int i = 1; i <= posicaoDoCaractereTerminador; i++)
            novaString[i - 1] = str[i];

        strcpy(str, novaString);
    }

    // limpa o fim da string
    while (precisaLimparFimDaString(str)) {
        int posicaoDoCaractereASerLimpado = (int) strlen(str) - 1;
        str[posicaoDoCaractereASerLimpado] = '\0';
    }
}