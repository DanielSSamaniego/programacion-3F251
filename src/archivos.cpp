#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *arg[])
{
    ifstream archivoSalida("archivo.txt");
    if (!archivoSalida)
    {
        cerr << "Error al leer archivo" << endl;
        return 1; // Finalizar con error
    }

    cout << "leyendo archivo" << endl;
    string linea;
    while (getline(archivoSalida, linea))
    {
        cout << linea << endl;
    }

    archivoSalida.close();

    return 0;
}