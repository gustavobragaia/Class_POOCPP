#include <iostream>

using namespace std;

namespace poo{
    class DataHorario{
        public:
            // construtor e destrutor
            DataHorario(int dia, int mes, int ano, int hora, int minuto, int segundo);
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

            //formata a data
            void formatarData();
            
            //formata o horario
            void formatarHorario();

        private:
            int dia;
            int mes;
            int ano;
            int hora;
            int minuto; 
            int segundo;
    };
};