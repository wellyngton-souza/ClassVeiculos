#include <iostream>
#include <string>
#include "veiculos.cpp"

int main(){
    Veiculos carro;
    int km;
    int litros;
    int consumo;

    std::cout << "Digite a quantidade de Quilometros\n";
    std::cin >> km;
    carro.setKm(km);

    std::cout << "Digite a quantidade de Litros\n";
    std::cin >> litros;
    carro.setGasolina(litros);

    std::cout << "Rodou um total de " << carro.getConsumo() << " km/litros";

    std::cin >> km;
    return 0;
}