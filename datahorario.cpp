#include <iostream>
#include "datahorario.h"

using namespace std;

namespace poo{

    DataHorario::DataHorario(int dia, int mes, int ano, int hora, int minuto, int segundo):dia(dia), mes(mes), ano(ano), hora(hora), minuto(minuto), segundo(segundo){
        cout << "Construtor: (" << dia << "," << mes << "," << ano << "," << minuto << "," << segundo << ")" << endl;
    }

    DataHorario::~DataHorario(){
        cout << "Destrutor: (" << dia << "," << mes << "," << ano << "," << minuto << "," << segundo << ")" << endl;
    }
    
    void DataHorario::imprime(bool sistemaHorario){
        // if sistemaHorario = 1, AM
        if(sistemaHorario){
            if (segundo < 0){
                cout << "Digite novamente! Segundo menor que 0" << endl;
            };
            
            cout << "Data em AM: " << dia << "/" << mes << "/" << ano << "Hora em AM: " << hora << ":" << minuto << ":" << segundo << endl;
        }
    }

    int DataHorario::getAno(){
        return ano;
    }

    int DataHorario::getDia(){
        return dia;
    }

    int DataHorario::getHora(){
        return hora;
    }

    int DataHorario::getMes(){
        return mes;
    }

    int DataHorario::getMinuto(){
        return minuto;
    }

    int DataHorario::getSegundo(){
        return segundo;
    }

}