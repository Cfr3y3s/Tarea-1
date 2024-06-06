#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    double sum, diff, product;

    std::cout << "Ingresa el primer numero: ";
    std::cin >> num1;

    std:: cout << "Ingresa el segundo numero: ";
    std::cin >> num2;

    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;

    std::cout << "La suma de " << num1 << " y " << num2 << " es: " << sum << endl;
    std::cout << "La resta de " << num1 << " y " << num2 << " es: " << diff << endl;
    std::cout << "La multiplicacion de " << " y " << num2 << " es: " << product << endl;

    std::cin.ignore();
    std::cin.get(); // *Nota

    return 0;

}