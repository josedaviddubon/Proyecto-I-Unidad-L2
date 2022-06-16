#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;

    while (true)
    {
        system("cls");
        cout << "******";
        cout << "MENU DE JUEGOS";
        cout << "*****";
        cout << endl;
        cout << endl;
        
        cout<< "Selecciona un Juego: " << endl;
        cout << endl;
        cout << endl;

        cout << "1 - StarShip " << endl;
        cout << "2 - Snake " << endl;

        cout << "Ingrese un numero del Menu para seleccionar un Juego:" << endl;
        cin >> opcion;

        if (opcion == 1)
            starShip();
        if (opcion == 2)
            snake();
        else
        break;
        
    }
    return 0;
}
