#ifndef SESSAO_H
#define SESSAO_H
#include <iostream>
#include <datahorario.h>
#include <pessoas.h>

using namespace std;

namespace poo{
    class Sessao{
        public:
            Sessao(string nomeDaPeca, DataHorario&){}
            ~Sessao();
            
            string proximoLivre();

            bool verifica();
            bool ocupa(string poltrona, Pessoa&)
        private:
            string nomeDaPeca;
            string dataHorarioPeca;
    }
};

#endif