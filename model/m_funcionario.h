#ifndef LOCADORA_ULTIMO_M_FUNCIONARIO_H
#define LOCADORA_ULTIMO_M_FUNCIONARIO_H

#include "../entities/types.h"

// adiciona um funcionario na tabela de funcionarios
void salvarFuncionario(Funcionario funcionario);

// obtém um array com todos os funcionarios da locadora
Funcionario *obterFuncionarios(void);

// atualiza o funcionario com o código do parâmetro com os dados do funcionario passado pelo parametro
void atualizarFuncionario(Funcionario funcionario, int codigo);

// desabilita o funcionario que tiver codigo igual ao código informado
void deletarFuncionarioPorCodigo(int codigo);

#endif //LOCADORA_ULTIMO_M_FUNCIONARIO_H
