#include <iostream>

int main() {
    int segundos, horas, minutos, restante;

    // Solicitar al usuario un número de segundos
    std::cout << "Ingresa un numero de segundos: ";
    std::cin >> segundos;

    // Convertir los segundos a horas, minutos y segundos
    horas = segundos / 3600;
    restante = segundos % 3600;
    minutos = restante / 60;
    segundos = restante % 60;

    // Mostrar la cantidad equivalente en horas, minutos, segundos
    std::cout << "Equivalente a: " << horas << " horas, " << minutos << " minutos, " << segundos << " segundos" << std::endl;

    return 0;
}