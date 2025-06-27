#include <iostream>
#include "rlutil.h"
#include "dados.h"
using namespace std;

int tirarDado6Caras(){
    return rand() % 6 + 1;
}

int tirarDado12Caras(){
  return rand() % 12 + 1;
}

int tirarDado2Caras(){
  return rand() % 2 + 1;
}

void generarTirada(int v[], int cant){
for(int i=0; i<cant; i++){
    v[i] = tirarDado6Caras();

  }
}

void jugadorGanador(string nombreJ1,string  nombreJ2, int puntajeJ1,int puntajeJ2,string &ganador,int &puntajeganador){

    cout << "Fin de la partida" << endl;
    cout << "El jugador " << nombreJ1 << ": genero " << puntajeJ1 << " puntos" << endl;
    cout << "El jugador " << nombreJ2 << ": genero " << puntajeJ2 << " puntos" << endl;

    if (puntajeJ1 > puntajeJ2) {
        //cout << "Gana el jugador " << nombreJ1 << "!" << endl;
        ganador = nombreJ1;
        puntajeganador = puntajeJ1;

    } else if (puntajeJ2 > puntajeJ1) {
       // cout << "Gana el jugador " << nombreJ2 << "!" << endl;
       ganador = nombreJ2;
       puntajeganador = puntajeJ2;

    } else {
        //cout << "Empate" << endl;
        puntajeganador=-1;
    }
}
void titilar(string ganador, int x, int y,int puntajeganador){
    for (int i=1;i<10;i++){

            if(i%2==0){
                rlutil::setColor(rlutil::GREEN);
                rlutil::setBackgroundColor(rlutil::WHITE);
            }
           else{
                rlutil::setColor(rlutil::WHITE);
                rlutil::setBackgroundColor(rlutil::GREEN);
            }

            rlutil::locate(x,y);
            if(puntajeganador == -1){
            cout << "La partida finaliza en empate";
            }
            else {
            cout << "El jugador " << ganador << " Es el ganador";
            }
            rlutil::msleep(110);
            }
        rlutil::setBackgroundColor(rlutil::BLACK);
}

void mostrarTirada(int v[], int cant) {
    cout << "Tirada: ";
    for (int i = 0; i < cant; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int generarNumeroObjetivo(){
    int dado1 = tirarDado12Caras();
    int dado2 = tirarDado12Caras();
    cout << dado1 << " + " << dado2 << endl;
    return dado1 + dado2;
}


int SumarTirada(int v[], int cant, int& DadosSeleccionados) {
    int eleccion = 0;
    int contador = 0;
    bool usados[12] = {false};

    while (true){
        cin >> eleccion;
        if (eleccion == 0){
            break;
        }
        eleccion -= 1;
        if (eleccion >= 0 && eleccion < cant){
            if (usados[eleccion]== false){
                contador += v[eleccion];
                DadosSeleccionados++;
                usados[eleccion] = true;
                cout << "Suma seleccionada: " << contador << endl;
            } else {cout << "Ya usaste este dado, TRAMPOSO!" << endl;}

        } else {
            cout << "No tenes tantos dados -.- Elegi nuevamente." << endl;}
    }
        cout << "Dados seleccionados: " << DadosSeleccionados << endl;
        return contador;
}

void mostrarBannerEstadisticas(){
    cout << " _____  _____  _____   ___  ______  _____  _____  _____  _____  _____   ___   _____ \n";
    cout << "|  ___|/  ___||_   _| / _ \\ |  _  \\|_   _|/  ___||_   _||_   _|/  __ \\ / _ \\ /  ___|\n";
    cout << "| |__  \\ `--.   | |  / /_\\ \\| | | |  | |  \\ `--.   | |    | |  | /  \\// /_\\ \\\\ `--. \n";
    cout << "|  __|  `--. \\  | |  |  _  || | | |  | |   `--. \\  | |    | |  | |    |  _  | `--. \\\n";
    cout << "| |___ /\\__/ /  | |  | | | || |/ /  _| |_ /\\__/ /  | |   _| |_ | \\__/\\| | | |/\\__/ /\n";
    cout << "\\____/ \\____/   \\_/  \\_| |_/|___/   \\___/ \\____/   \\_/   \\___/  \\____/\\_| |_/\\____/ \n";
    cout << "                                                                                    \n";
    cout << "                                                                                    \n";
}

