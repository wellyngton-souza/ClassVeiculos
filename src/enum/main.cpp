#include <iostream>

enum Fruta{
    banana,
    abacaxi,
    manga,
    pera,
    mexerica
};

int main(){
    Fruta aEscolhido = pera; // aEscolhido == 3

    std::string diaFruta[] = {"segunda", "terca", "quarta", "quinta", "sexta"};

    std::cout << "o dia da fruta selecionada: " << diaFruta[aEscolhido];
    
    return 0;
};