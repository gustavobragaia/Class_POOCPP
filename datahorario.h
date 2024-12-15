#include <iostream>

using namespace std;

namespace poo{
    class DataHorario{
        public:
            DataHorario(int dia, int mes, int ano, int hora, int minuto, int segundo):dia(dia), mes(mes), ano(ano), hora(hora), minuto(minuto), segundo(segundo){}
            ~DataHorario();
            
            // getters
            int getDia();
            int getMes();
            int getAno();
            int getHora();
            int getMinuto();
            int getSegundo();

            // imprime AM PM
            void imprime(bool);

            // imprime
            void imprimePorExtenso();
            

        private:
            int dia;
            int mes;
            int ano;
            int hora;
            int minuto; 
            int segundo;
    };
};