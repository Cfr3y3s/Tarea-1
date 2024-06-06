#include <iostream>

using namespace std;

int main () {

    double hourlyRate, dailyHours, weeklyPay;
    int workingDays = 5;  // Suponemos que trabaja 5 dias a la semana 

    std::cout << "Ingrese la tarifa horaria: ";
    std::cin >> hourlyRate;

    std::cout << "Ingrese el numero de horas trabajadas diariamente: ";
    std:: cin >> dailyHours;

    weeklyPay = hourlyRate * dailyHours * workingDays;

    std::cout << "El salario semanal es: $" << weeklyPay << endl;

    std::cin.ignore();
    std::cin.get(); // *Nota

    return 0;

}