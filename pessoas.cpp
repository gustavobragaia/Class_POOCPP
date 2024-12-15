#include "pessoas.h"
#include <iostream>

using namespace std;

namespace poo{
    // construtor 
    Pessoa::Pessoa(string nome, string cpf):nome(nome),cpf(cpf){
        // cout << "Construtor: (" << nome << "," << cpf << ")"<< endl;
    }

    // destrutor
    Pessoa::~Pessoa(){
        // cout << "Destrutor: (" << nome << "," << cpf << ")"<< endl;
    }

    // getter cpf
    string Pessoa::getCPF(){
        return cpf;
    }

    // getter nome
    string Pessoa::getNome(){
        return nome;
    }
    // imprime
    void Pessoa::imprime(){
        cout << "Nome: " << nome << endl;
        cout << "CPF: " << cpf << endl;
    }
}