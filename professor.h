#include <iostream>
#include "pessoas.h"
using namespace std;

namespace poo{
    class Professor : public Pessoa{
        public:
            // construtor
            Professor(string nome, string cpf, string universidade):Pessoa(nome, cpf), universidade(universidade){}

            // destrutor
            ~Professor();

            // get universidade
            string getUniversidade();

            // imprime
            void imprime();
            
        private:
            string universidade;
    };
};