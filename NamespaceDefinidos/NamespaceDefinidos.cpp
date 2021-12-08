#include <iostream>

#include "Primero.h"
#include "Segundo.h"

int main()
{
    std::cout <<  primero::hacerAlgo(6, 5) << '\n'; // usa el hacerAlgo() que existe en el namespace primero
    std::cout <<  segundo::hacerAlgo(6, 5) << '\n'; // usa el hacerAlgo() que existe en el namespace segundo

    return 0;
}



















/*#include <iostream>

int hacerAlgo(int x, int y); // declaración anticipada para hacerAlgo

int main()
{
    std::cout << hacerAlgo(6, 5) << '\n'; // ¿Qué hacerAlgo( ) deberíamos usar?
    return 0;
}*/





























