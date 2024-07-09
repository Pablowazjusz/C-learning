#include <iostream>
#include <cmath>


int main(){

    double a, b, p, c;
    std::cout << "Podaj wymiar pierwszego boku" << '\n';
    std::cin >> a;
    std::cout << "Podaj wymiar drugiego boku. " << '\n';
    std::cin >> b;
    p = 0.5 * a * b;
    
    c = sqrt(pow(a, 2) + pow(b, 2));
    
    
    std::cout << "Pole:"<< p << " cm" << '\n';
    std::cout << "Długość przeciwprostokątnej:" << c << " cm";

    return 0;
}