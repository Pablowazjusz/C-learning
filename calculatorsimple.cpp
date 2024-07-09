#include <iostream>

int main(){

    std::cout << "<>KALKULATOR PROSTY<>\n";
    
    std::cout << "Enter: \n + \n - \n * \n /\n";
    char op;
    std::cin >> op;
    
    double num1;
    double num2;
    double result;


    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> num1;
    std::cout << "Podaj druga liczba: ";
    std::cin >> num2;

    switch(op){
    case '+':
         result = num1 + num2;
        std::cout << "Wynik: " << result;
        break;
    
    case '-':
         result = num1 - num2;
        std::cout << "Wynik: " << result;
        break;
        
    case '*':
         result = num1 * num2;
        std::cout << "Wynik: " << result;
        break;
        
    case '/':
         result = num1 / num2;
        std::cout << "Wynik: " << result;
        break;

    default:
        std::cout<<"nie";
        break;
    
    }






    return 0;

}