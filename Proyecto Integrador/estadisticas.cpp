#include <iostream>
#include "menu.h"
#include "estadisticas.h"
#include "juego.h"

using namespace std;

void estadisticas (string& ganador, int& puntajeganador) {
    if (puntajeganador == 0) {
        cout << "Aun no hay registros de partidas jugadas." << endl;
    }

    else if (puntajeganador != -1) {
        cout << "El jugador con el mayor puntaje fue: " << ganador << endl;
        cout << "Obtuvo un puntaje de: " << puntajeganador << " puntos" << endl;
    }

    else {
        cout << "La última partida terminó en empate entre ambos jugadores." << endl;
    }
}
