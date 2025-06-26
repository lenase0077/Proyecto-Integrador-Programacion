# include<iostream>
#include "menu.h"
#include "juego.h"
#include "estadisticas.h"
using namespace std;



int OpcionesDeMenu(){

int opcion;

cout << " _____  _   _ ______ ______  _____  _   _  _____   ___  ______  _____  _____ " << endl;
cout << "|  ___|| \\ | ||  ___|| ___ \\|  ___|| \\ | ||_   _| / _ \\ |  _  \\|  _  |/  ___|" << endl;
cout << "| |__  |  \\| || |_   | |_/ /| |__  |  \\| |  | |  / /_\\ \\| | | || | | |\\ `--. " << endl;
cout << "|  __| | . ` ||  _|  |    / |  __| | . ` |  | |  |  _  || | | || | | | `--. \\" << endl;
cout << "| |___ | |\\  || |    | |\\ \\ | |___ | |\\  |  | |  | | | || |/ / \\ \\_/ //\\__/ /" << endl;
cout << "\\____/ |_| \\_/\\_|    \\_| \\_|\\____/ |_| \\_/  \\_/  \\_| |_/|___/   \\___/ \\____/ " << endl;
cout << endl << endl << endl;



cout << "------ Menu Principal ------" << endl;
cout << "1 - Jugar" << endl;
cout << "2 - Tabla de Estadisticas" << endl;
cout << "3 - Creditos" << endl;
cout << "----------------------------" << endl;
cout << "0 - Salir" << endl;

cout << "Eliga una opcion: " << endl;
cin >> opcion;
while(opcion <0 || opcion >3){
    cout << "Opcion incorrecta"<<endl;
    cout << "Opcion: ";
    cin >> opcion;
}
return opcion;
}


void ejecutarOpcionDeMenu(int opcion, string &ganador,int &puntajeganador){

switch(opcion)
{
case 1:

    system ("cls");
    MainJuego(ganador,puntajeganador);
    break;
case 2:

    system ("cls");
    cout << "Estadisticas" << endl;
    estadisticas(ganador,puntajeganador);
    break;
case 3:

    system ("cls");
    cout << "================= INFORMACION DEL GRUPO =================" << endl;
    cout << " " << endl;
    cout << "[ Grupo 11 ] " << endl;
    cout << " " << endl;
    cout << "[ Leandro Serrano ]" << endl;
    cout << "  Legajo:            [ 33.111 ]" << endl;
    cout << " " << endl;
    cout << "[ Julieta Rodriguez ]" << endl;
    cout << "  Legajo:            [ 32.487 ]" << endl;
    cout << " " << endl;
    cout << "[ Mat¡as Candia Butvilofsky ]" << endl;
    cout << "  Legajo:            [ 32.699 ]" << endl;
    cout << " " << endl;
    cout << "[ Fernando Raul Monz¢n ] " << endl;
    cout << "  Legajo:            [ 32.519 ] " << endl;;
    cout << " " << endl;
    cout << "=========================================================" << endl;
    break;
case 0:
    cout << "¡Gracias por jugar!";
    break;
    }
}


