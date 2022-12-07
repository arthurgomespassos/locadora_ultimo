#ifndef LOCADORA_ULTIMO_M_FORNECEDOR_H
#define LOCADORA_ULTIMO_M_FORNECEDOR_H

#include "../entities/types.h"

// adiciona uma fornecedor no arquivo binario
void salvarFornecedor(Fornecedor fornecedor);

// obtém um array com todos os fornecedores do arquivo binario
Fornecedor *obterFornecedores(void);

// atualiza o fornecedor com o codigo especificado na base de dados com os dados do forncedor
void atualizarFornecedor(Fornecedor fornecedor, int codigo);

// desabilita o fornecedor com o codigo igual ao codugo passado pelo parâmetro
void deletarFornecedorPorCodigo(int codigo);

#endif //LOCADORA_ULTIMO_M_FORNECEDOR_H
