#include <iostream>

int decision , sumatoria;
double precio; 

int main(){

    std::cout << "Bienvenido a la caja registradora" << std::endl;
    std::cout << "Quieres continuar? (1=si, 0=no): "<< std::endl;
    std::cin>>decision;

    while (decision==1) {

        if (decision==1) {
            std::cout << "Continuando..." << std::endl;
            std::cout << "Ingresa el precio del producto: " << std::endl;
            std::cin >> precio;
            sumatoria += precio;
            std::cout << "¿Quiere ingresar otro producto? (1=si, 0=no): " << std::endl;
            std::cin >> decision;

        } else {
            std::cout << "Saliendo..." << std::endl;
            std::cout << "El total a pagar es: " << sumatoria << std::endl;
        }
    }
}