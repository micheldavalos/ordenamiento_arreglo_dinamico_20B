#include <iostream>
#include "arreglo.h"
#include "personaje.h"
using namespace std;

int main()
{
    Arreglo<Personaje> personajes;

    Personaje p01("CUCEI", "zombie", 100.0, 100);
    Personaje p02("CUCEA", "troll", 90.0, 50);
    Personaje p03("CUCBA", "guerrero", 80.0, 10);
    Personaje p04("CUAAD", "troll", 90.0, 50);

    personajes << p01 << p02 << p03 << p02 << p02;

    personajes.seleccion();

    for (size_t i = 0; i < personajes.size(); i++)
    {
        Personaje &p = personajes[i];
        cout << p.getNombre() << endl;
    }


    Personaje p05("CUCS", "troll", 90.0, 50);
    personajes.insertar_inicio(p05);

    personajes.burbuja();

    for (size_t i = 0; i < personajes.size(); i++)
    {
        Personaje &p = personajes[i];
        cout << p.getNombre() << endl;
    }
    
    return 0;
}