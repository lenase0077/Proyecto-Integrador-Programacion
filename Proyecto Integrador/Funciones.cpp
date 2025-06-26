#include <iostream>
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
        cout << "Gana el jugador " << nombreJ1 << "!" << endl;
        ganador=nombreJ1;
        puntajeganador=puntajeJ1;

    } else if (puntajeJ2 > puntajeJ1) {
        cout << "Gana el jugador " << nombreJ2 << "!" << endl;
       ganador=nombreJ2;
       puntajeganador=puntajeJ2;

    } else {
        cout << "Empate" << endl;
        puntajeganador=-1;
    }
}


void mostrarTirada(int v[], int cant) {
    cout << "Tirada: ";
    for (int i = 0; i < cant; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
///La hice de nuevo porque pide mostrar los dados tirados ademas de la suma.
int generarNumeroObjetivo(){
    int vec[2];
    generarTirada(vec,2);
    mostrarTirada(vec,2);
    return vec[0]+ vec[1];
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
                cout << "La suma actual es: " << contador << endl;
            } else {cout << "Ya usaste este dado, TRAMPOSO!" << endl;}

        } else {
            cout << "No tenes tantos dados -.- Elegi nuevamente." << endl;}
    }
        cout << "Dados seleccionados: " << DadosSeleccionados << endl;
        return contador;
}


