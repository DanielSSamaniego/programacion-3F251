//////  contenedores ///////
#include <list>
#include <vector>
#include <map>
//////  flujo de datos (streams) ///////
#include <string>
#include <iostream>
#include <fstream>
//////  cadenas de texto ///////
#include <sstream>
using namespace std;

void demo();

enum TipoPokemon{
    FUEGO,
    PLANTA,
    AGUA,
    ELECTRICO,
    VOLADOR
};


    class pokemon
{
private:
    string nombre;
    list<TipoPokemon> tipos;
public:
    pokemon(){}
};


int main (int argc, char const *argv[])
{
    demo();
    return 0;
    
}

void demo()
{
    //////  arreglos clasicos (memoria estatica)  ///////
    cout << " 1.- arreglos" << endl;


    int edades[10];
    edades[0] = 1;
    edades[1] = 10;
    edades[2] = 20;
    edades[3] = 30;
    edades[4] = 40;

    //  cout << "Edad numero 1: " << edades[0] << endl; // <-- acceder a un valor unico

    //////  contenedores de la libreria  ///////
    cout << " 2.- listas" << endl;
    list<int> listaEdades;
    listaEdades.push_back(1);
    listaEdades.push_back(10);
    listaEdades.push_back(20);
    listaEdades.push_back(30);
    listaEdades.push_back(40);

    int indice = 0;
    for (auto &&edad : listaEdades)
    {
        cout << "Edad numero " << indice << " : " << edades[indice] << endl;
        indice++;
    }

    //  Utilizar estructura de vector
    //  La cual si se puede acceder por elemento
    cout << " 3.- vectores" << endl;

    vector<int> vectorEntero;
    vectorEntero.push_back(1);
    vectorEntero.push_back(2);
    vectorEntero.push_back(3);
    vectorEntero.push_back(4);
    vectorEntero[4] = 5; //// Aqui utilizamos el operador []

    for (int i = 0; i < 5; i++)
    {
        cout << "Edad " << i << " : " << vectorEntero[i] << endl;
    }

    cout << " 4.- mapas" << endl;
    // <llave,valor>    como diccionario
    map<string,pokemon> pokedex;

}
