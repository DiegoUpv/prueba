#include "BrazoRobotico.h"
#include <iostream>

int main() {
    
    BrazoRobotico brazo(0.0, 0.0, 0.0);

    
    std::cout << "Posición inicial del brazo:" << std::endl;
    std::cout << "Coordenadas (x, y, z): (" << brazo.getX() << ", " << brazo.getY() << ", " << brazo.getZ() << ")" << std::endl;
    std::cout << "¿Está sujetando un objeto? " << (brazo.estaSujetando() ? "Sí" : "No") << std::endl;

    brazo.mover(1.0, 2.0, 3.0);

    std::cout << "\nPosición después de mover:" << std::endl;
    std::cout << "Coordenadas (x, y, z): (" << brazo.getX() << ", " << brazo.getY() << ", " << brazo.getZ() << ")" << std::endl;

    brazo.coger();

    std::cout << "\nDespués de coger un objeto:" << std::endl;
    std::cout << "¿Está sujetando un objeto? " << (brazo.estaSujetando() ? "Sí" : "No") << std::endl;

    brazo.soltar();

    std::cout << "\nDespués de soltar el objeto:" << std::endl;
    std::cout << "¿Está sujetando un objeto? " << (brazo.estaSujetando() ? "Sí" : "No") << std::endl;

    return 0;
}
