#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <iostream>
#include "pessoas.h"

using namespace std;

namespace poo{
    class Professor : public Pessoa{
        public:
            // construtor e destrutor
            Professor(string nome, string cpf, string universidade);
            ~Professor();

            // get universidade
            string getUniversidade();

            // imprime
            void imprime();

        private:
            string universidade;
    };
};

#endif // PROFESSOR_H