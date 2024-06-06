#include <iostream>
#include <cctype>

int main () {
    char c1, c2;
    int sum;

    std::cout << "Ingresa el primer caracter: ";
    std::cin >> c1;

    std::cout << "Ingresa el segundo caracter: ";
    std::cin >> c2;

    sum = static_cast<int>(c1) + static_cast<int>(c2);

    std::cout << "La suma de los caracteres '" << c1 << "' y '" << c2 << "' es: '" << sum << std::endl;

    std::cin.ignore();
    std::cin.get(); // *Nota

    return 0;

}