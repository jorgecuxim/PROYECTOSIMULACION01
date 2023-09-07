
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int numLanzamientos;
    std::cout << "Ingrese el numero de veces que desea lanzar el dado: ";
    std::cin >> numLanzamientos;

    
    srand(time(0));

    int caras[6] = {0}; 

    for (int i = 0; i < numLanzamientos; i++) {
        int resultado = rand() % 6 + 1; 
        caras[resultado - 1]++; 
    }


    std::cout << "Resultados del lanzamiento del dado:" << std::endl;
    for (int i = 0; i < 6; i++) {
        std::cout << "Cara " << i + 1 << ": " << caras[i] << " veces" << std::endl;
    }

    system("pause"); 

    return 0;
}
