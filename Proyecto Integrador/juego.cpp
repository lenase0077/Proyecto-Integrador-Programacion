#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include "menu.h"
#include "funciones.h"
using namespace std;

bool jugarTurno(string nombreJugador, int& stockJugador, int& stockOponente, int& puntajeJugador) {

    system ("pause");
    system ("cls");

    int dados[12];
    int numeroObjetivo=0;
    int suma = 0;
    int dadosUsados = 0;

    cout << "Turno de " << nombreJugador << endl;
    numeroObjetivo = generarNumeroObjetivo();
    cout << "Numero objetivo: " << numeroObjetivo << endl;

    generarTirada(dados, stockJugador);
    mostrarTirada(dados, stockJugador);

    cout << "Elija los dados a sumar, estan enumerados comenzando del 1 por la izquierda. Ingresar 0 para finalizar el turno" << endl;
    suma = SumarTirada(dados, stockJugador, dadosUsados);

    if (suma == numeroObjetivo) {
        int puntosGanados = numeroObjetivo * dadosUsados;
        puntajeJugador += puntosGanados;
        stockJugador -= dadosUsados;
        stockOponente += dadosUsados;

        cout << "Ganaste " << puntosGanados << " puntos." << endl;
        cout << "Transfieres " << dadosUsados << " dados al oponente." << endl;
            if (stockJugador == 0) {
                cout << nombreJugador << " se quedo sin dados y gana automaticamente la partida!" << endl;
                puntajeJugador += 10000;
                return true; // Indica victoria automática
            }
        }
        else {
        cout << "No alcanzaste el numero objetivo." << endl;

         if (stockOponente > 1)
        {
            stockJugador += 1;
            stockOponente -= 1;
            cout << nombreJugador << " recibe un dado del stock del contrincante" << endl;
        }


    }

    cout << nombreJugador << ": " << stockJugador << " dados, " << puntajeJugador << " pts" << endl << endl;
    return false;
}


int MainJuego(string &ganador, int &puntajeganador) {
int mayorpuntaje=0;
    srand(time(0));
    int turno;
    int contadorRondas = 1;
    string nombreJ1, nombreJ2;
    int stockJ1 = 6, stockJ2 = 6;
    int puntajeJ1 = 0, puntajeJ2 = 0;
    bool victoriaAutomatica = false;


    cout << endl << "Introduzca el nombre del jugador 1: ";
    cin >> nombreJ1;
    cout << endl << "Introduzca el nombre del jugador 2: ";
    cin >> nombreJ2;

    // Decidir quien comienza
    int dado1, dado2;
    do {
        dado1 = tirarDado6Caras();
        dado2 = tirarDado6Caras();
    } while (dado1 == dado2);

    cout << endl << nombreJ1 << " tira: " << dado1 << endl;
    cout << endl << nombreJ2 << " tira: " << dado2 << endl;

    if (dado1 > dado2) {
        cout << endl << nombreJ1 << " Comienza la partida:" << endl;
        turno = 0;
    } else {
        cout << endl << nombreJ2 << " Comienza la partida:" << endl;
        turno = 1;
    }

    // Juego principal: hasta 3 rondas o victoria automatica
    while (contadorRondas <= 3 && !victoriaAutomatica) {
        cout << "Ronda " << contadorRondas << endl;

        if (turno == 0) {
            victoriaAutomatica = jugarTurno(nombreJ1, stockJ1, stockJ2, puntajeJ1);
            if (!victoriaAutomatica)
                victoriaAutomatica = jugarTurno(nombreJ2, stockJ2, stockJ1, puntajeJ2);
        } else {
            victoriaAutomatica = jugarTurno(nombreJ2, stockJ2, stockJ1, puntajeJ2);
            if (!victoriaAutomatica)
                victoriaAutomatica = jugarTurno(nombreJ1, stockJ1, stockJ2, puntajeJ1);
        }
        contadorRondas++;
    }
    jugadorGanador(nombreJ1, nombreJ2, puntajeJ1, puntajeJ2, ganador, puntajeganador);
     return 0;
}

