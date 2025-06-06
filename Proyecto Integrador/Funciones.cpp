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

int generarNumeroObjetivo() {
    return tirarDado12Caras() + tirarDado12Caras(); // suma de 2 dados de 12 caras
}

int quienVaPrimero() {
    int dado1, dado2;
    do {
        dado1 = tirarDado6Caras();
        dado2 = tirarDado6Caras();
    } while (dado1 == dado2);

    cout << "Tirada para definir quién empieza:\n";
    cout << "Jugador 1 sacó: " << dado1 << "\n";
    cout << "Jugador 2 sacó: " << dado2 << "\n";

    return (dado1 > dado2) ? 0 : 1;
}
