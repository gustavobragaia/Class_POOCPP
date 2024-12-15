#include <iostream>
#include "pessoas.h"
#include "professor.h"

using namespace std;

namespace poo{

    // construtor
    Professor::Professor(string nome, string cpf, string universidade):Pessoa(nome ,cpf), universidade(universidade){
        cout << "Construtor: (" << nome << "," << cpf << ","<< universidade << ")" <<  endl;
    }

    // destrutor
    Professor::~Professor(){
        cout << "Destrutor: (" << getNome() << "," << getCPF() << "," << universidade << ")" <<  endl;
    }

    // get universidade
    string Professor::getUniversidade(){
        return universidade;
    }

    // imprime
    void Professor::imprime(){
        Pessoa::imprime();
        cout << "Universidade: " << universidade << endl;
    }
}