#include <iostream>

using namespace std;


int main() {

    int num, sum = 0;

    std::cout << "Ingresa el numero hasta el que deseas sumar la serie: ";
    std::cin >> num;

    for (int i = 4; i <= num; i += 4) {
        std::cout << i << " + ";
        sum += i;

    }

    std::cout << "\nLa suma de la serie es: " << sum << endl;
    
    std::cin.ignore();
    std::cin.get(); // *Nota

    return 0 ;
}