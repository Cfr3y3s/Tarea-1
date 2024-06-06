#include <iostream>

using namespace std;

int main () {

    // Entrada de datos
    int minutos, segundos;
    float velocidad, sumaVelocidades = 0, numCorredores = 0;

    // Entrada de datos

    std::cout << "Introduzca los tiempos de los corredores (minutos, segundos): ";
    while (cin >> minutos >> segundos) {

        // Calculo del tiempo en segundos
        float tiempoSegundos = minutos * 60 + segundos;

        // Calculo de la distancia en metros
        float distancia = 1500; // Distancia en metros

        // Calculo de la velocidad

        velocidad = distancia / tiempoSegundos;

        // Acumulacion de velocidad

        sumaVelocidades += velocidad;
        numCorredores++;

        // Salida de resultados
        std::cout << "Tiempo: " << minutos << "minutos y " << segundos << " segundos" <<endl;
        std::cout << "Velocidad: " << velocidad << " m/s" << endl;

    }

    // Calculo de la velocidad media 
    float velocidadMedia = sumaVelocidades / numCorredores;

    // Salida de la velocidad media
    std::cout << "Velocidad media: " << velocidadMedia << " m/s" << endl;

    std::cin.ignore();
    std::cin.get(); // *Notas

    return 0;

}

