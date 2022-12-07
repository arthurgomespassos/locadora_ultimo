#ifndef LOCADORA_ULTIMO_M_CLIENTE_H
#define LOCADORA_ULTIMO_M_CLIENTE_H

#include "../entities/types.h"

// adiciona um cliente no arquivo binario da aplicação
void salvarCliente(Cliente cliente);

// obtém uma lista de todos os clientes da aplicação
Cliente *obterClientes(void);

// atualiza o funcionario do codigo especificado com os dados do funcionario passado
void atualizarCliente(Cliente cliente, int codigo);

// desabilita o cliente que tiver código igual ao código passado
void deletarClientePorCodigo(int codigo);


#endif //LOCADORA_ULTIMO_M_CLIENTE_H
