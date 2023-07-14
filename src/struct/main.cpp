#include <iostream>

struct fruta{ // parecido com type/interface do typescript
    std::string nome;
    int peso;
    float valor;
};

int main(){
    fruta banana;

    banana.nome = "banana";
    banana.peso = 10;
    banana.valor = 2.20f;

    std::cout << "banana: " << banana.nome << " " << banana.peso << " " << banana.valor;

    return 0;
};