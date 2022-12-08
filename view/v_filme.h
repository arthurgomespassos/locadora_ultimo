#ifndef LOCADORA_ULTIMO_V_FILME_H
#define LOCADORA_ULTIMO_V_FILME_H

#include "../entities/types.h"

// mostra os dados do filme passado pelo parâmetro
void exibeFilme(Filme filme);

// cria um novo filme com base nos dados inseridos pelo usuário
Filme criaFilme(void);

// exibe todos os filmes ativos da aplicação dentro da faixa de codigo espedicificada
void listarFilmes(int codigoInicial, int codigoFinal);

#endif //LOCADORA_ULTIMO_V_FILME_H
