#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include "menu.h"
#include "funciones.h"
using namespace std;

bool jugarTurno(string nombreJugador, int &stockJugador, int &stockOponente, int &puntajeJugador) {
    int dados[12];
    int numeroObjetivo = tirarDado12Caras() + tirarDado12Caras();
    int suma = 0;
    int dadosUsados = 0;

    cout << "Turno de " << nombreJugador << endl;
    cout << "Numero objetivo: " << numeroObjetivo << endl;

    generarTirada(dados, stockJugador);
    mostrarTirada(dados, stockJugador);

    cout << "Elija los resultados a sumar, estan enumerados comenzando del 1 por la izquierda. Ingresar 0 para finalizar el turno" << endl;
    suma = SumarTirada(dados, stockJugador, dadosUsados);

    if (suma == numeroObjetivo) {
        int puntosGanados = numeroObjetivo * dadosUsados;
        puntajeJugador += puntosGanados;
        stockJugador -= dadosUsados;
        stockOponente += dadosUsados;

        cout << "Ganaste " << puntosGanados << " puntos." << endl;
        cout << "Transfieres " << dadosUsados << " dados al oponente." << endl;

        if (stockJugador == 0) {
            cout << nombreJugador << " se quedó sin dados y gana automáticamente la partida!" << endl;
            puntajeJugador += 10000;
            return true; // Indica victoria automática
        }
    } else {
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


int MainJuego() {
    int turno;
    int contadorRondas = 1;
    string nombreJ1, nombreJ2;
    int stockJ1 = 6, stockJ2 = 6;
    int puntajeJ1 = 0, puntajeJ2 = 0;
    bool victoriaAutomatica = false;

    cout << "Introduzca el nombre del jugador 1: ";
    cin >> nombreJ1;
    cout << "Introduzca el nombre del jugador 2: ";
    cin >> nombreJ2;

    // Decidir quién comienza
    int dado1, dado2;
    do {
        dado1 = tirarDado6Caras();
        dado2 = tirarDado6Caras();
    } while (dado1 == dado2);

    cout << endl << nombreJ1 << " tira: " << dado1 << endl;
    cout << endl << nombreJ2 << " tira: " << dado2 << endl;

    if (dado1 > dado2) {
        cout << endl << nombreJ1 << " comienza la partida." << endl;
        turno = 0;
    } else {
        cout << endl << nombreJ2 << " comienza la partida." << endl;
        turno = 1;
    }

    // Juego principal: hasta 3 rondas o victoria automática
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

        // Cambio de turno
        if (turno == 0) {
            turno = 1;
        } else {
            turno = 0;
        }
    }


    cout << "Fin de la partida" << endl;
    cout << nombreJ1 << ": " << puntajeJ1 << " puntos" << endl;
    cout << nombreJ2 << ": " << puntajeJ2 << " puntos" << endl;

    if (puntajeJ1 > puntajeJ2) {
        cout << "Gana " << nombreJ1 << "!" << endl;
    } else if (puntajeJ2 > puntajeJ1) {
        cout << "Gana " << nombreJ2 << "!" << endl;
    } else {
        cout << "Empate" << endl;
    }

    return 0;
}


/*int MainJuego(){
    int turno;
    int ContadorRondas = 1;
    bool turnoJ1 = false;
    bool turnoJ2 = false;
    string nicknameJ1;
    string nicknameJ2;
    bool jackpot = false;
    int DadosStockJ1 = 6;
    int DadosStockJ2 = 6;
    int puntajeJ1 = 0;
    int puntajeJ2 = 0;
    int primerDado = 0;
    int segundoDado = 0;

///creo que el puntaje en vez de ser "= 0" tendria que ser "= (una variable que usemos en estadisticas para guardar el puntaje de cierto nickname)
cout << endl << "Introduzca el nombre del jugador 1" << endl;
cin >> nicknameJ1;

cout << endl << "Introduzca el nombre del jugador 2" << endl;
cin >> nicknameJ2;

///aca una funcion para setear el nombre en estadisticas? o checkear si ya existe



do {
        primerDado = tirarDado6Caras();
        segundoDado = tirarDado6Caras();

} while (primerDado == segundoDado);

    cout << endl << "Tirada para definir quien empieza:\n";
    cout << nicknameJ1 <<" saco: " << primerDado << "\n";
    cout << nicknameJ2 <<" saco: " << segundoDado << "\n";
    if (primerDado > segundoDado) {
        cout << nicknameJ1 <<" comienza" << endl << endl << endl;
        turno = 0;
    } else {
        cout << nicknameJ2 <<" comienza" << endl << endl << endl;
        turno = 1;
    }


while (jackpot == false || ContadorRondas <= 3){
    int dadosJ1[12];
    int dadosJ2[12];

    if (turno == 1){

        cout << "[Jugador 1 juega su turno en la ronda " << ContadorRondas << "]" << endl;
        turnoJ1 = true;
        int NumeroObjetivo = 0;
        int suma = 0;
        int DadosSeleccionados = 0;



        NumeroObjetivo = generarNumeroObjetivo();
        cout << endl << "El numero objetivo es " << NumeroObjetivo << endl;
        generarTirada(dadosJ1, DadosStockJ1);
        mostrarTirada(dadosJ1, DadosStockJ1);
        cout << endl << "Eliga los resultados a sumar, estan enumerados comenzando del 1 por la izquierda. Ingresar 0 para finalizar el turno" << endl;
        suma += SumarTirada(dadosJ1, DadosStockJ1, DadosSeleccionados);
        cout << DadosSeleccionados << endl;
        if (suma == NumeroObjetivo){
                puntajeJ1 += suma * DadosSeleccionados;
                cout << "puntaje actual: " << puntajeJ1<< endl;
            }
        else {cout << "suma no es igual al numero objetivo" << endl;}
    }
    else {
        cout << "[Jugador 2 juega su turno en la ronda " << ContadorRondas << "]" << endl;
        turnoJ2 = true;
    }
        if (turno == 1) {
        turno = 0;
        } else {
            turno = 1;
        }

        if(turnoJ1 == true && turnoJ2 == true){
        ContadorRondas++;
        turnoJ1 = false;
        turnoJ2 = false;
        }
}

///aca la comparativa y resultados

}*/


