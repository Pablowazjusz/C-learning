#include <iostream>

namespace first{
    int x = 1;
}

namespace second {
    int x = 2;
}

int main(){

    int x = 0;


//Może być wiele o tej samej nazwie w wielu namespacach
// inaczej bedzie error

    std::cout << x;

    std::cout << first::x;

    std::cout << second::x;

using namespace second;
std::cout << x;

    return 0;
}