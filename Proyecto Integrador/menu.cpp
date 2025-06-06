# include<iostream>
#include "menu.h"
#include "juego.h"
using namespace std;



int OpcionesDeMenu(){

int opcion;
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


///Saltaron un par de errores y como todavia no tenemos nada hecho lo deje comenentado
void ejecutarOpcionDeMenu(int opcion){
switch(opcion)
{
case 1:
    cout << "juego xd";
    MainJuego();
    break;
case 2:
    cout << "Estadisticas";
    ///Aca llamamos a una funcion de "estadisticas" que tiene todos los valores
    break;
case 3:
    cout << "grupo 1 blabla";
    ///y aca es un cout con toda la info de los creditos: nombres numero de grupo legajos etc
    break;
case 0:
    cout << "¡Gracias por jugar!";
    break;
}
}


