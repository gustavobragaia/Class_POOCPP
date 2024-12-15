#include <iostream>

using namespace std;

namespace poo{
    class Pessoa{
        public:
            // construtor e destrutor
            Pessoa(string nome, string cpf):nome(nome),cpf(cpf){}
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