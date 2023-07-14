#include <iostream>
#include <vector>

int main(){
    // [] define quais variaveis a função lambda vai ter acesso
    auto maior = [](std::vector<int> numeros) -> int { /* estrutura: []()->retorno{}  */
        int a = 0;
        for(int n : numeros){
            a = n > a ? n : a;
        }

        return a;
    };

    std::cout << maior( {3, 6, 5, 2, 4, 5, 6, 2, 100} );

    return 0;
}