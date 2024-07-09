//v=? 30km w 15min. o ile gdy 30km w 12min

#include <iostream>

int main(){
    double v1 = 30.0 / 15.0;

    double v2 = 30.0 / 12.0;


    std::cout << v1 << '\n';
    std::cout <<v2 << '\n';
    std::cout << v2 - v1 << '\n';
    return 0;
}