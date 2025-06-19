#include <iostream>
#include "menu.h"
#include "estadisticas.h"
#include "juego.h"
using namespace std;

void estadisticas (string& ganador, int& puntajeganador){

    cout << "No hay puntajes aun" << endl;
    if (puntajeganador!=-1){
        cout << "El jugador con el mayor puntaje fue: " << ganador << endl;
        cout << "Obtuvo un puntaje de: " << puntajeganador << endl;
        }
        else {
            cout << "Hubo empate entre ambos jugadores" << endl;
        }

}
