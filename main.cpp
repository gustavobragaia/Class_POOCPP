#include <iostream>
#include "pessoas.h"
#include "professor.h"
#include "estudante.h"
#include "datahorario.h"

using namespace poo;

int main(){
    Pessoa pessoa("Gustavo","5105249948");
    Pessoa pessoa2("Beatriz", "123123123");
    Professor professor("Ronaldo Prof", "51052499848", "Ufscar");
    Estudante estudante("Gustavo", "51052499848", 834383, 7, 6, 10, 6);
    DataHorario hora1(31, 13, 2024, 65, 121, 40);

    // professor.imprime();
    // pessoa.imprime();
    pessoa2.imprime();
    

    // sistemaHorario = 1, AM | sistemaHorario = 0, PM
    // hora1.imprime(0);

    return 0;
}