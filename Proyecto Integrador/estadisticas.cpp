#include <iostream>
#include "menu.h"
#include "estadisticas.h"
#include "juego.h"
#include "funciones.h"

using namespace std;

void estadisticas (string& ganador, int& puntajeganador) {
    if (puntajeganador == 0) {
        mostrarBannerEstadisticas();

        cout << "================= ESTADISTICAS ACTUALES =================" << endl << endl;

        cout << "Aun no hay registros de partidas jugadas." << endl << endl;

        cout << "=========================================================" << endl;
    }

    else if (puntajeganador != -1) {
        mostrarBannerEstadisticas();
        cout << "================= ESTADISTICAS ACTUALES =================" << endl << endl;
        cout << "El jugador con el mayor puntaje fue: " << ganador << endl;
        cout << "Obtuvo un puntaje de: " << puntajeganador << " puntos" << endl << endl;
        cout << "=========================================================" << endl;

    }

    else {
        mostrarBannerEstadisticas();
        cout << "================= ESTADISTICAS ACTUALES =================" << endl << endl;

        cout << "La ultima partida termino en empate entre ambos jugadores." << endl << endl;
        cout << "=========================================================" << endl;

    }
}
