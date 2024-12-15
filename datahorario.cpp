#include <iostream>
#include "datahorario.h"

using namespace std;

namespace poo{

    DataHorario::DataHorario(int dia, int mes, int ano, int hora, int minuto, int segundo):dia(dia), mes(mes), ano(ano), hora(hora), minuto(minuto), segundo(segundo){
        formatarData();
        formatarHorario();
        // cout << "Construtor: (" << dia << "," << mes << "," << ano << "," << minuto << "," << segundo << ")" << endl;
    }

    DataHorario::~DataHorario(){
        // cout << "Destrutor: (" << dia << "," << mes << "," << ano << "," << minuto << "," << segundo << ")" << endl;
    }
    
    void DataHorario::formatarHorario(){
        if(this->segundo >= 60 || this->minuto >= 60 || this->hora >= 24){

            // converte os segundos excedentes em minutos
            int minutoExtra = this->segundo / 60;
            this->segundo = this->segundo % 60;
            this->minuto = this->minuto + minutoExtra;

            // converte os minutos excedentes em horas
            int horaExtra = this->minuto / 60;
            this->minuto = this->minuto % 60;
            this->hora = this->hora + horaExtra;

            // converte as horas excedentes em minutos
            if(this->hora >= 24) {
                int diasExtra = this->hora / 24;
                this->hora = this->hora % 24;
                this->dia = this->dia + diasExtra;
                // depois de atualizar os dias, chama a func pra formatar a data
                formatarData();
            }
        }
    }

    void DataHorario::formatarData() {
        if(this->dia > 30 || this->mes > 12) {

            // pega os meses extras
            int mesExtra = this->dia / 30; 

            // pega o resto dos dias (se exceder 30 D)
            int diasRestantes = this->dia % 30;
            this->mes = this->mes + mesExtra;
            this->dia = diasRestantes;
            
            // pega os anos excedentes se o mes exceder 12
            if(this->mes > 12) {
                this->ano = this->ano + (this->mes / 12);
                this->mes = this->mes % 12;
            }
        }
    }

    void DataHorario::imprime(bool sistemaHorario){
        // if sistemaHorario = 1, AM
        if(sistemaHorario){
            cout << "Data: " << dia << "/" << mes << "/" << ano << "\n" << "Hora em AM: " << hora << ":" << minuto << ":" << segundo << endl;
        }

        // if sistemaHorario = 0, PM
        else{
            hora = hora - 12;
            cout << "Data: " << dia << "/" << mes << "/" << ano << "\n" << "Hora em PM: " << hora << ":" << minuto << ":" << segundo << endl;
           
        }
    }

    void DataHorario::imprimePorExtenso(){
            string stringMes;
            if(mes == 1){
                stringMes = "janeiro";
            }
            else if ( mes == 2){
                stringMes = "fevereiro";
            }
            else if ( mes == 3){
                stringMes = "marco";
            }
            else if ( mes == 4){
                stringMes = "abril";
            }
            else if ( mes == 5){
                stringMes = "maio";
            }
            else if ( mes == 6){
                stringMes = "junho";
            }
            else if ( mes == 7){
                stringMes = "julho";
            }
            else if ( mes == 8){
                stringMes = "agosto";
            }
            else if ( mes == 9){
                stringMes = "setembro";
            }
            else if ( mes == 10){
                stringMes = "outubro";
            }
            else if ( mes == 11){
                stringMes = "novembro";
            }
            else if ( mes == 12){
                stringMes = "dezembro";
            };

            // formatacao singular,plural de segundo
            string stringSegundo;
            if(segundo == 1){
                stringSegundo = " segundo";
            }
            else{
                stringSegundo = " segundos";
            };

            // formatacao singular,plural de minuto
            string stringMinuto;
            if(minuto == 1){
                stringMinuto = " minuto e ";
            }
            else{
                stringMinuto = " minutos e ";
            };

            // formatacao singular,plural de hora
            string stringHora;
            if(segundo == 1){
                stringHora = " hora, ";
            }
            else{
                stringHora = " horas, ";
            };

            cout << dia << " de " << stringMes << " de " << ano << " - " << hora << stringHora << minuto << stringMinuto << segundo << stringSegundo << endl;
       
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