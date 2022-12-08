#ifndef LOCADORA_ULTIMO_M_FILME_H
#define LOCADORA_ULTIMO_M_FILME_H

#include "../entities/types.h"

// adiciona um filme da base de dados
void salvarFilme(Filme filme);

// obtém todos os filmes da base de dados
Filme *obterFilmes(void);

// atualiza o filme da base de dados que tiver o mesmo código passado no segundo parâmetro com os dados do filme passado
void atualizarFilme(Filme filme, int codigo);

// desabilita o filme com o codigo igual ao código do filme passado
void deletarFilmePorCodigo(int codigo);

#endif //LOCADORA_ULTIMO_M_FILME_H
