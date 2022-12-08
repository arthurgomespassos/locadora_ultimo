#include <stdio.h>
#include <stdbool.h>
#include "view/v_menu.h"
#include "model/m_init.h"
#include "string_utils/string_util.h"
#include "view/v_util.h"
#include "model/m_xml.h"

// nomes de arquivos serão snake_case
// nomes de funções serão camelCase
// embora o código seja em portugues, as palavras: get, set, is, contains serão usadas também
// talvez as funções que capturem input do usuário estejam capturando também o caractere \n ao fim do input sendo necessário remover esse caractere logo após o input e depois fazer um trim do input também removendo \n e espaçõs do inicio e fim dos inputs
int main() {
    init();

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
        else if (op == 7) {
            // resetar aplicação
            deletaTodosOsArquivosBinarios();
            init();
        } else if (op == 8) {
            // exportar dados para xml

            char opcoes[100] = "";
            printf("O programa tem atualmente as seguines tabelas: locadora, cliente, filme, categoria, funcionario e fornecedor.\n");
            printf("Digite separado por espaços, apenas com caracteres minusculos, quais das tabelas você quer exportar os dados.");
            fgets(opcoes, 100, stdin);
            limpaString(opcoes);
            limpa_buffer_de_teclado();

            exportarXml(opcoes);
        }
    }

    return 0;
}
