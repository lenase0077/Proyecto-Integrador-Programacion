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

/*int quienVaPrimero() {
    int dado1, dado2;
    do {
        dado1 = tirarDado6Caras();
        dado2 = tirarDado6Caras();
    } while (dado1 == dado2);

    cout << endl << "Tirada para definir quien empieza:\n";
    cout << "Jugador 1 saco: " << dado1 << "\n";
    cout << "Jugador 2 saco: " << dado2 << "\n";
    if (dado1 > dado2) {
        cout << "El jugador 1 comienza" << endl << endl << endl;
        return 0;
    } else {
        cout << "El jugador 2 comienza" << endl << endl << endl;
        return 1;
    }
}*/

void mostrarTirada(int v[], int cant) {
    cout << "Tirada: ";
    for (int i = 0; i < cant; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int SumarTirada(int v[], int cant, int& DadosSeleccionados){
    int eleccion = 0;
    int contador = 0;
     while (eleccion != -1){
        cin >> eleccion;
        eleccion += -1;
        contador += v[eleccion];
        DadosSeleccionados++;
    }
    DadosSeleccionados -= 1;
    cout << DadosSeleccionados << endl;
    return contador;
}



