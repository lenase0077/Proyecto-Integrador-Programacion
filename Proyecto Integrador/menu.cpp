# include<iostream>
#include "menu.h"
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

while(opcion <0 || opcion >2){
    cout << "Opcion incorrecta"<<endl;
    cout << "Opcion: ";
    cin >> opcion;
}
return opcion;
}
///Saltaron un par de errores y como todavia no tenemos nada hecho lo deje comenentado
/*void ejecutarOpcionDeMenu(int opcion, int puntosMaximo);{
switch(opcion)
{
case 1:
    Aca llamamos a la funcion de "juego" que tiene todo el tema dados
    break;
case 2:
    Aca llamamos a una funcion de "estadisticas" que tiene todos los valores
    break;
case 3:
    y aca es un cout con toda la info de los creditos: nombres numero de grupo legajos etc
case 0:
    cout << "¡Gracias por jugar!";
    break;
}
}
*/

