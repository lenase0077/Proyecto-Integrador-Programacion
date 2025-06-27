#pragma once
///using namespace std;



int tirarDado2Caras();
int tirarDado6Caras();
int tirarDado12Caras();
void generarTirada(int v[], int cant);
int generarNumeroObjetivo();
int quienVaPrimero();
void mostrarTirada(int v[], int cant);
int SumarTirada (int v[], int cant, int& DadosSeleccionados);
void jugadorGanador(std::string nombreJ1, std::string nombreJ2, int puntajeJ1, int puntajeJ2,std::string &ganador, int &puntajeganador);
void mostrarBannerEstadisticas();
void titilar (std::string ganador, int x, int y,int puntajeganador);
