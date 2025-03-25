#include <iostream>
#include "Foco.hpp"

int main(int argc, char const *argv[])
{

    Foco focos[10];
    for (size_t i = 0; i < 10; i++)
    {
       focos[i].Encender();
    }
    
   // foco1.Encender();

    std::cout
        << "Foco 1: "
        << foco1.LeerEstado()
        << std::endl;

    std::cout
        << "argc:"
        << argc
        << std::endl;

    return 0;
}