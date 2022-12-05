#ifndef LOCADORA_ULTIMO_M_CATEGORIA_H
#define LOCADORA_ULTIMO_M_CATEGORIA_H

#include "../entities/types.h"

// adiciona uma categoria no arquivo binario
void salvarCategoria(Categoria categoria);

// obtém um array com todas as categorias armazenadas
Categoria* obterCategorias(void);

// substitui todos os dados daquela categoria no arquivo binario
void atualizarCategoria(Categoria categoria, int codigo);

// desabilita uma categoria que tiver codigo igual ao codigo colocado
void deletarCategoriaPorCodigo(int codigo);

#endif //LOCADORA_ULTIMO_M_CATEGORIA_H