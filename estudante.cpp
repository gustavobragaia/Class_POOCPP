#include <iostream>
#include "estudante.h"
#include "pessoas.h"

using namespace std;

namespace poo{

    // construtor
    Estudante::Estudante(string nome, string cpf, int RA, double prova1, double prova2, double trabalho1, double trabalho2):Pessoa(nome,cpf), RA(RA), prova1(prova1), prova2(prova2), trabalho1(trabalho1), trabalho2(trabalho2){
        // cout << "Construtor: (" << nome << "," << cpf << "," << RA << "," << prova1 << "," << prova2 << "," << trabalho1 << "," << trabalho2 << ")" << endl;
    }
    
    // destrutor
     Estudante::~Estudante(){
        // cout << "Destrutor: (" << getNome() << "," << getCPF() << "," << RA << "," << prova1 << "," << prova2 << "," << trabalho1 << "," << trabalho2 << ")" << endl;
    }

    // get RA
    int Estudante::getRA(){
        return RA;
    }

    double Estudante::media(){
        double MP = (prova1 + prova2)/2;
        double MT = (trabalho1 + trabalho2)/2;
        double MF = ((MP*8) + (MT*2))/10;

        return MF;
    }

    bool Estudante::aprovado(){
        if(Estudante::media() >= 6){
            cout << "O estudante " << getNome() << " foi aprovado!" << endl;
            return true;
        }
        else{
            cout << "O estudante " << getNome() << " foi reprovado!" << endl;
            return false;
        }
    }

    bool Estudante::sac(){
        if(Estudante::media() < 6 &&  Estudante::media() >= 5){
            cout << "O estudante " << getNome() << " ficou de SAC!" << endl;
            return true;
        }
        else{
            cout << "O estudante " << getNome() << " não ficou de SAC!" << endl;
            return false;
        }
    }

    double Estudante::notaSAC(){
        double SAC;

        if (SAC >= 12/Estudante::media()){
            cout << "O estudante " << getNome() << "atingiu a nota mínima necessária" << endl;
            return true;
        }
        else{
            cout << "O estudante " << getNome() << "não atingiu a nota mínima necessária" << endl;
            return false;
        }
    }

    void Estudante::imprime(){
        Pessoa::imprime();
        cout << "RA" <<  RA << endl;
        cout << "Nota prova 1: " <<  prova1 << endl;
        cout << "Nota prova 2: " <<  prova2 << endl;
        cout << "Nota trabalho 1: " <<  trabalho1 << endl;
        cout << "Nota trabalho 2: " <<  trabalho2 << endl;
        
    }
}
