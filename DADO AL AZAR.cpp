
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int numLanzamientos;
    std::cout << "Ingrese el numero de veces que desea lanzar el dado: ";
    std::cin >> numLanzamientos;

    // Inicializar la semilla para generar números aleatorios
    srand(time(0));

    int caras[6] = {0}; // Arreglo para contar el número de veces que sale cada cara

    for (int i = 0; i < numLanzamientos; i++) {
        int resultado = rand() % 6 + 1; // Generar un número aleatorio entre 1 y 6
        caras[resultado - 1]++; // Incrementar el contador de la cara correspondiente
    }

    // Mostrar los resultados
    std::cout << "Resultados del lanzamiento del dado:" << std::endl;
    for (int i = 0; i < 6; i++) {
        std::cout << "Cara " << i + 1 << ": " << caras[i] << " veces" << std::endl;
    }

    system("pause"); // Pausar el programa antes de terminar

    return 0;
}
