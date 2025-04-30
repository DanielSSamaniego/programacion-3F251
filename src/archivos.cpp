#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Persona{
    char nombre[10];
    int edad;
};

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
//////****************************************/////
//Escritura de archivos binarios

ofstream archivoSalidaBinario("archivo.bin",ios::binary);
if(!archivoSalidaBinario){
    cerr << "Error al leer archivo" << endl;
    return 1; // Finalizar con error
}

Persona p1 = {"Juan", 20};
Persona p2 = {"Pedro", 30};
Persona p3 = {"Maria", 40};

archivoSalidaBinario.write((char*)(&p1), sizeof(Persona));
archivoSalidaBinario.write((char*)(&p2), sizeof(Persona));
archivoSalidaBinario.write((char*)(&p3), sizeof(Persona));
archivoSalidaBinario.close();

    return 0;
}