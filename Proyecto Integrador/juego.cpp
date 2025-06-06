#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include "menu.h"
#include "funciones.h"

using namespace std;


int MainJuego(){
    int turno;
    int ContadorRondas = 0;
    char nickname;
    bool jackpot = false;
cout << endl << "Introduzca su nombre de jugador" << endl;
cin >> nickname;

///aca una funcion para setear el nombre en estadisticas? o checkear si ya existe

turno = quienVaPrimero();
turno = 1;

while (jackpot = false || ContadorRondas <= 3){
    int dadosJ1[12];
    int dadosJ2[12];

    if (turno == 1){
        cout << "[Jugador 1 juega la ronda " << ContadorRondas + 1 << "]" << endl;


    }
    else {
        cout << "[Jugador 2 juega la ronda " << ContadorRondas + 1 << "]" << endl;
    }

        if (turno == 1) {
        turno = 0;
        } else {
            turno = 1;
        }

        ContadorRondas++;

}

///aca la comparativa y resultados

}
