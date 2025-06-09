#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include "menu.h"
#include "funciones.h"

using namespace std;


int MainJuego(){
    int turno;
    int ContadorRondas = 1;
    bool turnoJ1 = false;
    bool turnoJ2 = false;
    char nicknameJ1;
    char nicknameJ2;
    bool jackpot = false;
    int DadosStockJ1 = 6;
    int DadosStockJ2 = 6;
    int puntajeJ1 = 0;
    int puntajeJ2 = 0;
///creo que el puntaje en vez de ser "= 0" tendria que ser "= (una variable que usemos en estadisticas para guardar el puntaje de cierto nickname)
cout << endl << "Introduzca el nombre del jugador 1" << endl;
cin >> nicknameJ1;

cout << endl << "Introduzca el nombre del jugador 2" << endl;
cin >> nicknameJ2;

///aca una funcion para setear el nombre en estadisticas? o checkear si ya existe

turno = quienVaPrimero();
turno = 1;

while (jackpot = false || ContadorRondas <= 3){
    int dadosJ1[12];
    int dadosJ2[12];

    if (turno == 1){
        cout << "[Jugador 1 juega su turno en la ronda " << ContadorRondas << "]" << endl;
        turnoJ1 = true;
        int NumeroObjetivo = 0;
        int suma = 0;
        int DadosSeleccionados = 0;
        NumeroObjetivo += tirarDado12Caras() + tirarDado12Caras();
        cout << "El numero objetivo es " << NumeroObjetivo << endl;
        generarTirada(dadosJ1, DadosStockJ1);
        mostrarTirada(dadosJ1, DadosStockJ1);
        cout << "Eliga los resultados a sumar, estan enumerados comenzando del 1 por la izquierda. Ingresar 0 para finalizar el turno" << endl;
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

}
