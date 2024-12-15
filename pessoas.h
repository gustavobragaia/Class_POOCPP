#ifndef PESSOAS_H
#define PESSOAS_H
#include <iostream>

using namespace std;

namespace poo{
    class Pessoa{
        public:
            // construtor e destrutor
            Pessoa(string nome, string cpf);
            ~Pessoa();

            // getters
            string getNome();
            string getCPF();
            void imprime();

        private:
            string nome;
            string cpf;
    };
};

#endif // PESSOAS_H