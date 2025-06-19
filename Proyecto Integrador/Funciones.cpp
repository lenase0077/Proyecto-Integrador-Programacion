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
    cout << nombreJ1 << ": " << puntajeJ1 << " puntos" << endl;
    cout << nombreJ2 << ": " << puntajeJ2 << " puntos" << endl;

    if (puntajeJ1 > puntajeJ2) {
        cout << "Gana " << nombreJ1 << "!" << endl;
        ganador=nombreJ1;
        puntajeganador=puntajeJ1;
    } else if (puntajeJ2 > puntajeJ1) {
        cout << "Gana " << nombreJ2 << "!" << endl;
       ganador=nombreJ2;
       puntajeganador=puntajeJ2;
    } else {
        cout << "Empate" << endl;
        puntajeganador=-1;
    }
}
/* int generarNumeroObjetivo() {

    return tirarDado12Caras() + tirarDado12Caras(); // suma de 2 dados de 12 caras
}
*/



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
while (true){
    cin >> eleccion;
    if (eleccion == 0){
        break;
    }
    eleccion -= 1;
    if (eleccion >= 0 && eleccion < cant){
        contador += v[eleccion];
        DadosSeleccionados++;
        cout << "La suma actual es: " << contador << endl;
    } else {
        cout << "Te equivocaste gil" << endl;}
}
    cout << "Dados seleccionados: " << DadosSeleccionados << endl;
    return contador;
}


