
#include <iostream>

// Resolvemos o exercício como se estivéssemos percorrendo uma matriz, usando 2 loops, externo e interno.                                                                                                                                                                         
int main() {
    // Variável externa                                                                                                                                                                                                                                                           
    int externo = 1;

    // Loop externo                                                                                                                                                                                                                                                               
    while (externo <= 5) {
        // Variável interna                                                                                                                                                                                                                                                       
        int interno = 1;

        // Loop interno                                                                                                                                                                                                                                                           
        while (interno <= externo) {
            std::cout << interno << ' ';
            ++interno;
        }

        // Imprime nova linha                                                                                                                                                                                                                                                     
        std::cout << '\n';
        ++externo;
    }

}
