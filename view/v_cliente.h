#ifndef LOCADORA_ULTIMO_V_CLIENTE_H
#define LOCADORA_ULTIMO_V_CLIENTE_H

#include "../entities/types.h"

void exibeCliente(Cliente cliente);

Cliente criaCliente(void);

// exibe os clientes que estiverem entre a faixa de codigo especificada e que forem do sexo especificado
void listarClientes(int codigoInicial, int codigoFinal, char sexo);

#endif //LOCADORA_ULTIMO_V_CLIENTE_H
