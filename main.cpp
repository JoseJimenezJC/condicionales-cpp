#include <iostream>

int main() {
    int numero;

    std::cout << "=== Condicionales ===" << std::endl;
    std::cout << "Ingresa un numero: ";
    std::cin >> numero;

    // Par o impar
    if (numero % 2 == 0) {
        std::cout << numero << " es par." << std::endl;
    } else {
        std::cout << numero << " es impar." << std::endl;
    }

    // Positivo, negativo o cero
    if (numero > 0) {
        std::cout << "Es positivo." << std::endl;
    } else if (numero < 0) {
        std::cout << "Es negativo." << std::endl;
    } else {
        std::cout << "Es cero." << std::endl;
    }

    // Mayor de tres numeros
    int a, b, c;
    std::cout << "\nIngresa tres numeros para saber cual es el mayor:" << std::endl;
    std::cin >> a >> b >> c;

    int mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;

    std::cout << "El mayor es: " << mayor << std::endl;

    return 0;
}
