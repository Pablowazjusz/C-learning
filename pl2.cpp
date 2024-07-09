#include <iostream>


int main(){

double x;
std::cout << "Podaj liczbe:";


std::cin >> x;

if (x >= 0){
    std::cout << "Twoja liczba jest dodatnia i ";
}
else{
    std::cout << "Twoja liczba jest ujemna i ";
}

int modulo = (int)x % 2;

if (modulo == 0){
    std::cout << "jest parzysta";
}
else{
    std::cout << "nie jest parzysta";
}

    return 0;
}