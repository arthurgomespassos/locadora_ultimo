#ifndef LOCADORA_ULTIMO_M_LOCADORA_H
#define LOCADORA_ULTIMO_M_LOCADORA_H

#include "../entities/types.h"

// salva a locadora ou atualiza a locadora no arquivo binario
void salvarOuAtualizarLocadora(Locadora locadora);

// Obtém os dados da locadora no arquivo binario
Locadora obtemLocadoraDoDisco(void);

#endif //LOCADORA_ULTIMO_M_LOCADORA_H