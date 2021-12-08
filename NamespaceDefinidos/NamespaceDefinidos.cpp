#include <iostream>
#include "Primero.h"
#include "Segundo.h"

int main()
{
    std::cout <<  primero::hacerAlgo(4, 3) << '\n'; // usa el hacerAlgo() que existe en el namespace primero
    std::cout <<  segundo::hacerAlgo(4, 3) << '\n'; // usa el hacerAlgo() que existe en el namespace primero

    return 0;
}















/*#include <iostream>

int hacerAlgo(int x, int y); // declaración anticipada para hacerAlgo

int main()
{
    std::cout << hacerAlgo(4, 3) << '\n'; // ¿Qué hacer algo deberíamos usar?
    return 0;
}*/