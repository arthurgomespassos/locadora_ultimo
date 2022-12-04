#include <stdio.h>
#include <stdbool.h>
#include "view/v_menu.h"

// nomes de arquivos serão snake_case
// nomes de funções serão camelCase
// embora o código seja em portugues, as palavras: get, set, is, contains serão usadas também
// talvez as funções que capturem input do usuário estejam capturando também o caractere \n ao fim do input sendo necessário remover esse caractere logo após o input e depois fazer um trim do input também removendo \n e espaçõs do inicio e fim dos inputs
int main() {
    int op;
    while (true) {
        op = menuPrincipal();
        if (op == 0) break;
        else if (op == 1) menuLocadora();
        else if (op == 2) menuCliente();
        else if (op == 3) menuFilme();
        else if (op == 4) menuCategoria();
        else if (op == 5) menuFuncionario();
        else if (op == 6) menuFornecedor();
    }
    return 0;
}
