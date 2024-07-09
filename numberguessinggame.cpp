#include <iostream>

int main(){

    int number;
    int guess;

    srand(time(NULL));

    number = (rand() % 10) +1;

    std::cout << "Number guessing gem" << std::endl;

    do{
        std::cout << "Guess the number 1-10\n";
        std::cin >> guess;


    }while (guess != number);

    std::cout << "U are right";



    return 0;
}