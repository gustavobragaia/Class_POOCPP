#include <iostream>
#include "pessoas.h"

using namespace std;

namespace poo{
    class Estudante : public Pessoa{
        public:
            // construtor
            Estudante(string nome, string cpf, int RA, double prova1, double prova2, double trabalho1, double trabalho2):Pessoa(nome,cpf), RA(RA), prova1(prova1), prova2(prova2), trabalho1(trabalho1), trabalho2(trabalho2){}

            // destrutor
            ~Estudante();

            // getters
            int getRA();

            // calculo media
            double media();

            // return falso ou true para aprovado
            bool aprovado();

            // return falso ou true se aluno ficou em SAC
            bool sac();

            // calcula a nota minima necessaria pra aprovacao
            double notaSAC();

            // imprime
            void imprime();

        private:
            int RA;
            double prova1;
            double prova2;
            double trabalho1;
            double trabalho2;
    };
};